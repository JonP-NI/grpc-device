
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service registrar implementation for the NI-RFMXNR Metadata
//---------------------------------------------------------------------
#include "nirfmxnr_library.h"

#include <grpcpp/server_builder.h>

#include "nirfmxnr_service.h"
#include "nirfmxnr_service_registrar.h"

namespace nirfmxnr_grpc {

std::shared_ptr<void> register_service(
  grpc::ServerBuilder& builder,
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<niRFmxInstrHandle>>& resource_repository,
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<ViSession>>& vi_session_resource_repository,
  const nidevice_grpc::FeatureToggles& feature_toggles)
{
  auto toggles = NiRFmxNRFeatureToggles(feature_toggles);

  if (toggles.is_enabled)
  {
    auto library = std::make_shared<NiRFmxNRLibrary>();
    auto service = std::make_shared<NiRFmxNRService>(
      library,
      resource_repository,
      vi_session_resource_repository,
      toggles);
    builder.RegisterService(service.get());
    return service;
  }

  return {};
}

} // nirfmxnr_grpc
