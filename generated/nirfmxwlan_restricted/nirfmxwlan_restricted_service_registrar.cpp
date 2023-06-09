
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service registrar implementation for the NI-RFMXWLAN-RESTRICTED Metadata
//---------------------------------------------------------------------
#include "nirfmxwlan_restricted_library.h"

#include <grpcpp/server_builder.h>

#include "nirfmxwlan_restricted_service.h"
#include "nirfmxwlan_restricted_service_registrar.h"

namespace nirfmxwlan_restricted_grpc {

std::shared_ptr<void> register_service(
  grpc::ServerBuilder& builder,
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<niRFmxInstrHandle>>& resource_repository,
  const nidevice_grpc::FeatureToggles& feature_toggles)
{
  auto toggles = NiRFmxWLANRestrictedFeatureToggles(feature_toggles);

  if (toggles.is_enabled)
  {
    auto library = std::make_shared<NiRFmxWLANRestrictedLibrary>();
    auto service = std::make_shared<NiRFmxWLANRestrictedService>(
      library,
      resource_repository,
      toggles);
    builder.RegisterService(service.get());
    return service;
  }

  return {};
}

} // nirfmxwlan_restricted_grpc
