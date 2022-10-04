
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service header for the NI-FGEN Metadata
//---------------------------------------------------------------------
#ifndef NIFGEN_GRPC_SERVICE_H
#define NIFGEN_GRPC_SERVICE_H

#include <nifgen.grpc.pb.h>
#include <condition_variable>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <map>
#include <server/converters.h>
#include <server/feature_toggles.h>
#include <server/session_resource_repository.h>
#include <server/shared_library.h>
#include <server/exceptions.h>

#include "nifgen_library_interface.h"

namespace nifgen_grpc {

struct NiFgenFeatureToggles
{
  using CodeReadiness = nidevice_grpc::FeatureToggles::CodeReadiness;
  NiFgenFeatureToggles(const nidevice_grpc::FeatureToggles& feature_toggles = {});

  bool is_enabled;
};

class NiFgenService final : public NiFgen::Service {
public:
  using ResourceRepositorySharedPtr = std::shared_ptr<nidevice_grpc::SessionResourceRepository<ViSession>>;

  NiFgenService(
    NiFgenLibraryInterface* library,
    ResourceRepositorySharedPtr resource_repository,
    const NiFgenFeatureToggles& feature_toggles = {});
  virtual ~NiFgenService();
  
  ::grpc::Status AbortGeneration(::grpc::ServerContext* context, const AbortGenerationRequest* request, AbortGenerationResponse* response) override;
  ::grpc::Status AdjustSampleClockRelativeDelay(::grpc::ServerContext* context, const AdjustSampleClockRelativeDelayRequest* request, AdjustSampleClockRelativeDelayResponse* response) override;
  ::grpc::Status AllocateNamedWaveform(::grpc::ServerContext* context, const AllocateNamedWaveformRequest* request, AllocateNamedWaveformResponse* response) override;
  ::grpc::Status AllocateWaveform(::grpc::ServerContext* context, const AllocateWaveformRequest* request, AllocateWaveformResponse* response) override;
  ::grpc::Status CheckAttributeViBoolean(::grpc::ServerContext* context, const CheckAttributeViBooleanRequest* request, CheckAttributeViBooleanResponse* response) override;
  ::grpc::Status CheckAttributeViInt32(::grpc::ServerContext* context, const CheckAttributeViInt32Request* request, CheckAttributeViInt32Response* response) override;
  ::grpc::Status CheckAttributeViInt64(::grpc::ServerContext* context, const CheckAttributeViInt64Request* request, CheckAttributeViInt64Response* response) override;
  ::grpc::Status CheckAttributeViReal64(::grpc::ServerContext* context, const CheckAttributeViReal64Request* request, CheckAttributeViReal64Response* response) override;
  ::grpc::Status CheckAttributeViSession(::grpc::ServerContext* context, const CheckAttributeViSessionRequest* request, CheckAttributeViSessionResponse* response) override;
  ::grpc::Status CheckAttributeViString(::grpc::ServerContext* context, const CheckAttributeViStringRequest* request, CheckAttributeViStringResponse* response) override;
  ::grpc::Status ClearArbMemory(::grpc::ServerContext* context, const ClearArbMemoryRequest* request, ClearArbMemoryResponse* response) override;
  ::grpc::Status ClearArbSequence(::grpc::ServerContext* context, const ClearArbSequenceRequest* request, ClearArbSequenceResponse* response) override;
  ::grpc::Status ClearArbWaveform(::grpc::ServerContext* context, const ClearArbWaveformRequest* request, ClearArbWaveformResponse* response) override;
  ::grpc::Status ClearError(::grpc::ServerContext* context, const ClearErrorRequest* request, ClearErrorResponse* response) override;
  ::grpc::Status ClearFreqList(::grpc::ServerContext* context, const ClearFreqListRequest* request, ClearFreqListResponse* response) override;
  ::grpc::Status ClearInterchangeWarnings(::grpc::ServerContext* context, const ClearInterchangeWarningsRequest* request, ClearInterchangeWarningsResponse* response) override;
  ::grpc::Status ClearUserStandardWaveform(::grpc::ServerContext* context, const ClearUserStandardWaveformRequest* request, ClearUserStandardWaveformResponse* response) override;
  ::grpc::Status Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response) override;
  ::grpc::Status Commit(::grpc::ServerContext* context, const CommitRequest* request, CommitResponse* response) override;
  ::grpc::Status ConfigureAmplitude(::grpc::ServerContext* context, const ConfigureAmplitudeRequest* request, ConfigureAmplitudeResponse* response) override;
  ::grpc::Status ConfigureArbSequence(::grpc::ServerContext* context, const ConfigureArbSequenceRequest* request, ConfigureArbSequenceResponse* response) override;
  ::grpc::Status ConfigureArbWaveform(::grpc::ServerContext* context, const ConfigureArbWaveformRequest* request, ConfigureArbWaveformResponse* response) override;
  ::grpc::Status ConfigureChannels(::grpc::ServerContext* context, const ConfigureChannelsRequest* request, ConfigureChannelsResponse* response) override;
  ::grpc::Status ConfigureClockMode(::grpc::ServerContext* context, const ConfigureClockModeRequest* request, ConfigureClockModeResponse* response) override;
  ::grpc::Status ConfigureCustomFIRFilterCoefficients(::grpc::ServerContext* context, const ConfigureCustomFIRFilterCoefficientsRequest* request, ConfigureCustomFIRFilterCoefficientsResponse* response) override;
  ::grpc::Status ConfigureDigitalEdgeScriptTrigger(::grpc::ServerContext* context, const ConfigureDigitalEdgeScriptTriggerRequest* request, ConfigureDigitalEdgeScriptTriggerResponse* response) override;
  ::grpc::Status ConfigureDigitalEdgeStartTrigger(::grpc::ServerContext* context, const ConfigureDigitalEdgeStartTriggerRequest* request, ConfigureDigitalEdgeStartTriggerResponse* response) override;
  ::grpc::Status ConfigureDigitalLevelScriptTrigger(::grpc::ServerContext* context, const ConfigureDigitalLevelScriptTriggerRequest* request, ConfigureDigitalLevelScriptTriggerResponse* response) override;
  ::grpc::Status ConfigureFreqList(::grpc::ServerContext* context, const ConfigureFreqListRequest* request, ConfigureFreqListResponse* response) override;
  ::grpc::Status ConfigureFrequency(::grpc::ServerContext* context, const ConfigureFrequencyRequest* request, ConfigureFrequencyResponse* response) override;
  ::grpc::Status ConfigureOperationMode(::grpc::ServerContext* context, const ConfigureOperationModeRequest* request, ConfigureOperationModeResponse* response) override;
  ::grpc::Status ConfigureOutputEnabled(::grpc::ServerContext* context, const ConfigureOutputEnabledRequest* request, ConfigureOutputEnabledResponse* response) override;
  ::grpc::Status ConfigureOutputImpedance(::grpc::ServerContext* context, const ConfigureOutputImpedanceRequest* request, ConfigureOutputImpedanceResponse* response) override;
  ::grpc::Status ConfigureOutputMode(::grpc::ServerContext* context, const ConfigureOutputModeRequest* request, ConfigureOutputModeResponse* response) override;
  ::grpc::Status ConfigureP2PEndpointFullnessStartTrigger(::grpc::ServerContext* context, const ConfigureP2PEndpointFullnessStartTriggerRequest* request, ConfigureP2PEndpointFullnessStartTriggerResponse* response) override;
  ::grpc::Status ConfigureReferenceClock(::grpc::ServerContext* context, const ConfigureReferenceClockRequest* request, ConfigureReferenceClockResponse* response) override;
  ::grpc::Status ConfigureSampleClockSource(::grpc::ServerContext* context, const ConfigureSampleClockSourceRequest* request, ConfigureSampleClockSourceResponse* response) override;
  ::grpc::Status ConfigureSampleRate(::grpc::ServerContext* context, const ConfigureSampleRateRequest* request, ConfigureSampleRateResponse* response) override;
  ::grpc::Status ConfigureSoftwareEdgeScriptTrigger(::grpc::ServerContext* context, const ConfigureSoftwareEdgeScriptTriggerRequest* request, ConfigureSoftwareEdgeScriptTriggerResponse* response) override;
  ::grpc::Status ConfigureSoftwareEdgeStartTrigger(::grpc::ServerContext* context, const ConfigureSoftwareEdgeStartTriggerRequest* request, ConfigureSoftwareEdgeStartTriggerResponse* response) override;
  ::grpc::Status ConfigureStandardWaveform(::grpc::ServerContext* context, const ConfigureStandardWaveformRequest* request, ConfigureStandardWaveformResponse* response) override;
  ::grpc::Status ConfigureSynchronization(::grpc::ServerContext* context, const ConfigureSynchronizationRequest* request, ConfigureSynchronizationResponse* response) override;
  ::grpc::Status ConfigureTriggerMode(::grpc::ServerContext* context, const ConfigureTriggerModeRequest* request, ConfigureTriggerModeResponse* response) override;
  ::grpc::Status CreateAdvancedArbSequence(::grpc::ServerContext* context, const CreateAdvancedArbSequenceRequest* request, CreateAdvancedArbSequenceResponse* response) override;
  ::grpc::Status CreateArbSequence(::grpc::ServerContext* context, const CreateArbSequenceRequest* request, CreateArbSequenceResponse* response) override;
  ::grpc::Status CreateFreqList(::grpc::ServerContext* context, const CreateFreqListRequest* request, CreateFreqListResponse* response) override;
  ::grpc::Status CreateWaveformComplexF64(::grpc::ServerContext* context, const CreateWaveformComplexF64Request* request, CreateWaveformComplexF64Response* response) override;
  ::grpc::Status CreateWaveformF64(::grpc::ServerContext* context, const CreateWaveformF64Request* request, CreateWaveformF64Response* response) override;
  ::grpc::Status CreateWaveformFromFileF64(::grpc::ServerContext* context, const CreateWaveformFromFileF64Request* request, CreateWaveformFromFileF64Response* response) override;
  ::grpc::Status CreateWaveformFromFileHWS(::grpc::ServerContext* context, const CreateWaveformFromFileHWSRequest* request, CreateWaveformFromFileHWSResponse* response) override;
  ::grpc::Status CreateWaveformFromFileI16(::grpc::ServerContext* context, const CreateWaveformFromFileI16Request* request, CreateWaveformFromFileI16Response* response) override;
  ::grpc::Status CreateWaveformI16(::grpc::ServerContext* context, const CreateWaveformI16Request* request, CreateWaveformI16Response* response) override;
  ::grpc::Status DefineUserStandardWaveform(::grpc::ServerContext* context, const DefineUserStandardWaveformRequest* request, DefineUserStandardWaveformResponse* response) override;
  ::grpc::Status DeleteNamedWaveform(::grpc::ServerContext* context, const DeleteNamedWaveformRequest* request, DeleteNamedWaveformResponse* response) override;
  ::grpc::Status DeleteScript(::grpc::ServerContext* context, const DeleteScriptRequest* request, DeleteScriptResponse* response) override;
  ::grpc::Status Disable(::grpc::ServerContext* context, const DisableRequest* request, DisableResponse* response) override;
  ::grpc::Status DisableAnalogFilter(::grpc::ServerContext* context, const DisableAnalogFilterRequest* request, DisableAnalogFilterResponse* response) override;
  ::grpc::Status DisableDigitalFilter(::grpc::ServerContext* context, const DisableDigitalFilterRequest* request, DisableDigitalFilterResponse* response) override;
  ::grpc::Status DisableDigitalPatterning(::grpc::ServerContext* context, const DisableDigitalPatterningRequest* request, DisableDigitalPatterningResponse* response) override;
  ::grpc::Status DisableScriptTrigger(::grpc::ServerContext* context, const DisableScriptTriggerRequest* request, DisableScriptTriggerResponse* response) override;
  ::grpc::Status DisableStartTrigger(::grpc::ServerContext* context, const DisableStartTriggerRequest* request, DisableStartTriggerResponse* response) override;
  ::grpc::Status EnableAnalogFilter(::grpc::ServerContext* context, const EnableAnalogFilterRequest* request, EnableAnalogFilterResponse* response) override;
  ::grpc::Status EnableDigitalFilter(::grpc::ServerContext* context, const EnableDigitalFilterRequest* request, EnableDigitalFilterResponse* response) override;
  ::grpc::Status EnableDigitalPatterning(::grpc::ServerContext* context, const EnableDigitalPatterningRequest* request, EnableDigitalPatterningResponse* response) override;
  ::grpc::Status ErrorHandler(::grpc::ServerContext* context, const ErrorHandlerRequest* request, ErrorHandlerResponse* response) override;
  ::grpc::Status ErrorMessage(::grpc::ServerContext* context, const ErrorMessageRequest* request, ErrorMessageResponse* response) override;
  ::grpc::Status ErrorQuery(::grpc::ServerContext* context, const ErrorQueryRequest* request, ErrorQueryResponse* response) override;
  ::grpc::Status ExportAttributeConfigurationBuffer(::grpc::ServerContext* context, const ExportAttributeConfigurationBufferRequest* request, ExportAttributeConfigurationBufferResponse* response) override;
  ::grpc::Status ExportAttributeConfigurationFile(::grpc::ServerContext* context, const ExportAttributeConfigurationFileRequest* request, ExportAttributeConfigurationFileResponse* response) override;
  ::grpc::Status ExportSignal(::grpc::ServerContext* context, const ExportSignalRequest* request, ExportSignalResponse* response) override;
  ::grpc::Status GetAttributeViBoolean(::grpc::ServerContext* context, const GetAttributeViBooleanRequest* request, GetAttributeViBooleanResponse* response) override;
  ::grpc::Status GetAttributeViInt32(::grpc::ServerContext* context, const GetAttributeViInt32Request* request, GetAttributeViInt32Response* response) override;
  ::grpc::Status GetAttributeViInt64(::grpc::ServerContext* context, const GetAttributeViInt64Request* request, GetAttributeViInt64Response* response) override;
  ::grpc::Status GetAttributeViReal64(::grpc::ServerContext* context, const GetAttributeViReal64Request* request, GetAttributeViReal64Response* response) override;
  ::grpc::Status GetAttributeViSession(::grpc::ServerContext* context, const GetAttributeViSessionRequest* request, GetAttributeViSessionResponse* response) override;
  ::grpc::Status GetAttributeViString(::grpc::ServerContext* context, const GetAttributeViStringRequest* request, GetAttributeViStringResponse* response) override;
  ::grpc::Status GetChannelName(::grpc::ServerContext* context, const GetChannelNameRequest* request, GetChannelNameResponse* response) override;
  ::grpc::Status GetError(::grpc::ServerContext* context, const GetErrorRequest* request, GetErrorResponse* response) override;
  ::grpc::Status GetExtCalLastDateAndTime(::grpc::ServerContext* context, const GetExtCalLastDateAndTimeRequest* request, GetExtCalLastDateAndTimeResponse* response) override;
  ::grpc::Status GetExtCalLastTemp(::grpc::ServerContext* context, const GetExtCalLastTempRequest* request, GetExtCalLastTempResponse* response) override;
  ::grpc::Status GetExtCalRecommendedInterval(::grpc::ServerContext* context, const GetExtCalRecommendedIntervalRequest* request, GetExtCalRecommendedIntervalResponse* response) override;
  ::grpc::Status GetFIRFilterCoefficients(::grpc::ServerContext* context, const GetFIRFilterCoefficientsRequest* request, GetFIRFilterCoefficientsResponse* response) override;
  ::grpc::Status GetHardwareState(::grpc::ServerContext* context, const GetHardwareStateRequest* request, GetHardwareStateResponse* response) override;
  ::grpc::Status GetNextCoercionRecord(::grpc::ServerContext* context, const GetNextCoercionRecordRequest* request, GetNextCoercionRecordResponse* response) override;
  ::grpc::Status GetNextInterchangeWarning(::grpc::ServerContext* context, const GetNextInterchangeWarningRequest* request, GetNextInterchangeWarningResponse* response) override;
  ::grpc::Status GetSelfCalLastDateAndTime(::grpc::ServerContext* context, const GetSelfCalLastDateAndTimeRequest* request, GetSelfCalLastDateAndTimeResponse* response) override;
  ::grpc::Status GetSelfCalLastTemp(::grpc::ServerContext* context, const GetSelfCalLastTempRequest* request, GetSelfCalLastTempResponse* response) override;
  ::grpc::Status GetSelfCalSupported(::grpc::ServerContext* context, const GetSelfCalSupportedRequest* request, GetSelfCalSupportedResponse* response) override;
  ::grpc::Status GetStreamEndpointHandle(::grpc::ServerContext* context, const GetStreamEndpointHandleRequest* request, GetStreamEndpointHandleResponse* response) override;
  ::grpc::Status ImportAttributeConfigurationBuffer(::grpc::ServerContext* context, const ImportAttributeConfigurationBufferRequest* request, ImportAttributeConfigurationBufferResponse* response) override;
  ::grpc::Status ImportAttributeConfigurationFile(::grpc::ServerContext* context, const ImportAttributeConfigurationFileRequest* request, ImportAttributeConfigurationFileResponse* response) override;
  ::grpc::Status Init(::grpc::ServerContext* context, const InitRequest* request, InitResponse* response) override;
  ::grpc::Status InitWithOptions(::grpc::ServerContext* context, const InitWithOptionsRequest* request, InitWithOptionsResponse* response) override;
  ::grpc::Status InitializeWithChannels(::grpc::ServerContext* context, const InitializeWithChannelsRequest* request, InitializeWithChannelsResponse* response) override;
  ::grpc::Status InitiateGeneration(::grpc::ServerContext* context, const InitiateGenerationRequest* request, InitiateGenerationResponse* response) override;
  ::grpc::Status InvalidateAllAttributes(::grpc::ServerContext* context, const InvalidateAllAttributesRequest* request, InvalidateAllAttributesResponse* response) override;
  ::grpc::Status IsDone(::grpc::ServerContext* context, const IsDoneRequest* request, IsDoneResponse* response) override;
  ::grpc::Status ManualEnableP2PStream(::grpc::ServerContext* context, const ManualEnableP2PStreamRequest* request, ManualEnableP2PStreamResponse* response) override;
  ::grpc::Status QueryArbSeqCapabilities(::grpc::ServerContext* context, const QueryArbSeqCapabilitiesRequest* request, QueryArbSeqCapabilitiesResponse* response) override;
  ::grpc::Status QueryArbWfmCapabilities(::grpc::ServerContext* context, const QueryArbWfmCapabilitiesRequest* request, QueryArbWfmCapabilitiesResponse* response) override;
  ::grpc::Status QueryFreqListCapabilities(::grpc::ServerContext* context, const QueryFreqListCapabilitiesRequest* request, QueryFreqListCapabilitiesResponse* response) override;
  ::grpc::Status ReadCurrentTemperature(::grpc::ServerContext* context, const ReadCurrentTemperatureRequest* request, ReadCurrentTemperatureResponse* response) override;
  ::grpc::Status Reset(::grpc::ServerContext* context, const ResetRequest* request, ResetResponse* response) override;
  ::grpc::Status ResetAttribute(::grpc::ServerContext* context, const ResetAttributeRequest* request, ResetAttributeResponse* response) override;
  ::grpc::Status ResetDevice(::grpc::ServerContext* context, const ResetDeviceRequest* request, ResetDeviceResponse* response) override;
  ::grpc::Status ResetInterchangeCheck(::grpc::ServerContext* context, const ResetInterchangeCheckRequest* request, ResetInterchangeCheckResponse* response) override;
  ::grpc::Status ResetWithDefaults(::grpc::ServerContext* context, const ResetWithDefaultsRequest* request, ResetWithDefaultsResponse* response) override;
  ::grpc::Status RevisionQuery(::grpc::ServerContext* context, const RevisionQueryRequest* request, RevisionQueryResponse* response) override;
  ::grpc::Status RouteSignalOut(::grpc::ServerContext* context, const RouteSignalOutRequest* request, RouteSignalOutResponse* response) override;
  ::grpc::Status SelfCal(::grpc::ServerContext* context, const SelfCalRequest* request, SelfCalResponse* response) override;
  ::grpc::Status SelfTest(::grpc::ServerContext* context, const SelfTestRequest* request, SelfTestResponse* response) override;
  ::grpc::Status SendSoftwareEdgeTrigger(::grpc::ServerContext* context, const SendSoftwareEdgeTriggerRequest* request, SendSoftwareEdgeTriggerResponse* response) override;
  ::grpc::Status SetAttributeViBoolean(::grpc::ServerContext* context, const SetAttributeViBooleanRequest* request, SetAttributeViBooleanResponse* response) override;
  ::grpc::Status SetAttributeViInt32(::grpc::ServerContext* context, const SetAttributeViInt32Request* request, SetAttributeViInt32Response* response) override;
  ::grpc::Status SetAttributeViInt64(::grpc::ServerContext* context, const SetAttributeViInt64Request* request, SetAttributeViInt64Response* response) override;
  ::grpc::Status SetAttributeViReal64(::grpc::ServerContext* context, const SetAttributeViReal64Request* request, SetAttributeViReal64Response* response) override;
  ::grpc::Status SetAttributeViSession(::grpc::ServerContext* context, const SetAttributeViSessionRequest* request, SetAttributeViSessionResponse* response) override;
  ::grpc::Status SetAttributeViString(::grpc::ServerContext* context, const SetAttributeViStringRequest* request, SetAttributeViStringResponse* response) override;
  ::grpc::Status SetNamedWaveformNextWritePosition(::grpc::ServerContext* context, const SetNamedWaveformNextWritePositionRequest* request, SetNamedWaveformNextWritePositionResponse* response) override;
  ::grpc::Status SetWaveformNextWritePosition(::grpc::ServerContext* context, const SetWaveformNextWritePositionRequest* request, SetWaveformNextWritePositionResponse* response) override;
  ::grpc::Status WaitUntilDone(::grpc::ServerContext* context, const WaitUntilDoneRequest* request, WaitUntilDoneResponse* response) override;
  ::grpc::Status WriteBinary16Waveform(::grpc::ServerContext* context, const WriteBinary16WaveformRequest* request, WriteBinary16WaveformResponse* response) override;
  ::grpc::Status WriteComplexBinary16Waveform(::grpc::ServerContext* context, const WriteComplexBinary16WaveformRequest* request, WriteComplexBinary16WaveformResponse* response) override;
  ::grpc::Status WriteNamedWaveformComplexF64(::grpc::ServerContext* context, const WriteNamedWaveformComplexF64Request* request, WriteNamedWaveformComplexF64Response* response) override;
  ::grpc::Status WriteNamedWaveformComplexI16(::grpc::ServerContext* context, const WriteNamedWaveformComplexI16Request* request, WriteNamedWaveformComplexI16Response* response) override;
  ::grpc::Status WriteNamedWaveformF64(::grpc::ServerContext* context, const WriteNamedWaveformF64Request* request, WriteNamedWaveformF64Response* response) override;
  ::grpc::Status WriteNamedWaveformI16(::grpc::ServerContext* context, const WriteNamedWaveformI16Request* request, WriteNamedWaveformI16Response* response) override;
  ::grpc::Status WriteP2PEndpointI16(::grpc::ServerContext* context, const WriteP2PEndpointI16Request* request, WriteP2PEndpointI16Response* response) override;
  ::grpc::Status WriteScript(::grpc::ServerContext* context, const WriteScriptRequest* request, WriteScriptResponse* response) override;
  ::grpc::Status WriteWaveform(::grpc::ServerContext* context, const WriteWaveformRequest* request, WriteWaveformResponse* response) override;
  ::grpc::Status WriteWaveformComplexF64(::grpc::ServerContext* context, const WriteWaveformComplexF64Request* request, WriteWaveformComplexF64Response* response) override;
private:
  NiFgenLibraryInterface* library_;
  ResourceRepositorySharedPtr session_repository_;
  ::grpc::Status ConvertApiErrorStatusForViSession(::grpc::ServerContext* context, int32_t status, ViSession vi);
  std::map<std::int32_t, std::string> nifgenstringattributevaluesmapped_input_map_ { {1, "ClkIn"},{2, "None"},{3, "OnboardRefClk"},{4, "PXI_Clk"},{5, "RTSI7"},{6, "ClkIn"},{7, "DDC_ClkIn"},{8, "OnboardClock"},{9, "PXI_Star"},{10, "PXI_Trig0"},{11, "PXI_Trig1"},{12, "PXI_Trig2"},{13, "PXI_Trig3"},{14, "PXI_Trig4"},{15, "PXI_Trig5"},{16, "PXI_Trig6"},{17, "PXI_Trig7"},{18, "ClkIn"},{19, "OnboardClock"}, };
  std::map<std::string, std::int32_t> nifgenstringattributevaluesmapped_output_map_ { {"ClkIn", 1},{"None", 2},{"OnboardRefClk", 3},{"PXI_Clk", 4},{"RTSI7", 5},{"ClkIn", 6},{"DDC_ClkIn", 7},{"OnboardClock", 8},{"PXI_Star", 9},{"PXI_Trig0", 10},{"PXI_Trig1", 11},{"PXI_Trig2", 12},{"PXI_Trig3", 13},{"PXI_Trig4", 14},{"PXI_Trig5", 15},{"PXI_Trig6", 16},{"PXI_Trig7", 17},{"ClkIn", 18},{"OnboardClock", 19}, };

  NiFgenFeatureToggles feature_toggles_;
};

} // namespace nifgen_grpc

#endif  // NIFGEN_GRPC_SERVICE_H
