
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service registrar implementation for the NI-XNET Metadata
//---------------------------------------------------------------------
#include "nixnet_library.h"

#include <grpcpp/server_builder.h>

#include "nixnet_service.h"
#include "nixnet_service_registrar.h"

namespace nixnet_grpc {

std::shared_ptr<void> register_service(
  grpc::ServerBuilder& builder,
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<nxSessionRef_t>>& resource_repository,
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<nxDatabaseRef_t>>& nx_database_ref_t_resource_repository,
  const nidevice_grpc::FeatureToggles& feature_toggles)
{
  auto toggles = NiXnetFeatureToggles(feature_toggles);

  if (toggles.is_enabled)
  {
    auto library = std::make_shared<NiXnetLibrary>();
    auto service = std::make_shared<NiXnetService>(
      library,
      resource_repository,
      nx_database_ref_t_resource_repository,
      toggles);
    builder.RegisterService(service.get());
    return service;
  }

  return {};
}

} // nixnet_grpc
