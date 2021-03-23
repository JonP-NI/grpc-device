<%
import common_helpers
import handler_helpers

attributes = data['attributes']
config = data['config']
enums = data['enums']
functions = data['functions']

service_class_prefix = config["service_class_prefix"]
namespace_prefix = config["namespace_component"] + "_grpc::"
module_name = config["module_name"]
c_function_prefix = config["c_function_prefix"]
linux_library_name = config['library_info']['Linux']['64bit']['name']
windows_libary_name = config['library_info']['Windows']['64bit']['name']

%>\
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service implementation for the ${config["driver_name"]} Metadata
//---------------------------------------------------------------------
#include "${module_name}_library.h"

#if defined(_MSC_VER)
static const char* kLibraryName = "${windows_libary_name}";
#else
static const char* kLibraryName = "lib${linux_library_name}.so";
#endif

namespace ${config["namespace_component"]}_grpc {

${service_class_prefix}Library::${service_class_prefix}Library() : shared_library_(kLibraryName)
{
  shared_library_.load();
  bool loaded = shared_library_.is_loaded();
  memset(&function_pointers_, 0, sizeof(function_pointers_));
  if (!loaded) {
    return;
  }
% for method_name in handler_helpers.filter_api_functions(functions):
<%
  c_name = handler_helpers.get_cname(functions, method_name, c_function_prefix)
%>\
  function_pointers_.${method_name} = reinterpret_cast<${method_name}Ptr>(shared_library_.get_function_pointer("${c_name}"));
%endfor
}

${service_class_prefix}Library::~${service_class_prefix}Library()
{
}

::grpc::Status ${service_class_prefix}Library::check_function_exists(std::string functionName)
{
  return shared_library_.function_exists(functionName.c_str())
    ? ::grpc::Status::OK
    : ::grpc::Status(::grpc::NOT_FOUND, "Could not find the function " + functionName);
}

% for method_name in handler_helpers.filter_api_functions(functions):
<%
  f = functions[method_name]
  parameters = f['parameters']
  handler_helpers.sanitize_names(parameters)
  return_type = f['returns']
  parameter_list = handler_helpers.create_params(parameters)
  argument_list = ', '.join(p['cppName'] for p in parameters)
  c_name = handler_helpers.get_cname(functions, method_name, c_function_prefix)
%>\
${return_type} ${service_class_prefix}Library::${method_name}(${parameter_list})
{
  if (!function_pointers_.${method_name}) {
    throw nidevice_grpc::LibraryLoadException("Could not find ${c_name}.");
  }
#if defined(_MSC_VER)
  return ${c_name}(${argument_list});
#else
  return function_pointers_.${method_name}(${argument_list});
#endif
}

%endfor
}  // namespace ${config["namespace_component"]}_grpc
