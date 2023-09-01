
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for VISA.
//---------------------------------------------------------------------
#ifndef VISA_GRPC_CLIENT_H
#define VISA_GRPC_CLIENT_H

#include <grpcpp/grpcpp.h>

#include <visa.grpc.pb.h>
#include <tests/utilities/client_helpers.h>

#include <memory>
#include <vector>

namespace visa_grpc::experimental::client {

namespace pb = ::google::protobuf;
using StubPtr = std::unique_ptr<Visa::Stub>;
using namespace nidevice_grpc::experimental::client;


AssertIntrSignalResponse assert_intr_signal(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<AssertInterruptSignalMode, pb::int32>& mode, const pb::uint32& status_id);
AssertTriggerResponse assert_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<TriggerProtocol, pb::uint32>& protocol);
AssertUtilSignalResponse assert_util_signal(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<AssertUtilSignalMode, pb::uint32>& mode);
ClearResponse clear(const StubPtr& stub, const nidevice_grpc::Session& vi);
CloseResponse close(const StubPtr& stub, const SessionOrEventData& object_handle);
DisableEventResponse disable_event(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<EventType, pb::uint32>& event_type, const simple_variant<EventMechanism, pb::uint32>& event_mechanism);
DiscardEventsResponse discard_events(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<EventType, pb::uint32>& event_type, const simple_variant<EventMechanism, pb::uint32>& event_mechanism);
EnableEventResponse enable_event(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<EventType, pb::uint32>& event_type, const simple_variant<EventMechanism, pb::uint32>& event_mechanism, const pb::uint32& filter_context);
FindRsrcResponse find_rsrc(const StubPtr& stub, const std::string& expression);
FlushResponse flush(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<BufferMask, pb::uint32>& mask);
GetAttributeResponse get_attribute(const StubPtr& stub, const SessionOrEventData& object_handle, const VisaAttribute& attribute_name);
GpibCommandResponse gpib_command(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::string& buffer);
GpibControlATNResponse gpib_control_atn(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<GpibControlAtnMode, pb::uint32>& mode);
GpibControlRENResponse gpib_control_ren(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<GpibControlRenMode, pb::uint32>& mode);
GpibPassControlResponse gpib_pass_control(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::uint32& primary_address, const pb::uint32& secondary_address);
GpibSendIFCResponse gpib_send_ifc(const StubPtr& stub, const nidevice_grpc::Session& vi);
In16Response in16(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<AddressSpace, pb::uint32>& address_space, const pb::uint64& offset);
In32Response in32(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<AddressSpace, pb::uint32>& address_space, const pb::uint64& offset);
In64Response in64(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<AddressSpace, pb::uint32>& address_space, const pb::uint64& offset);
In8Response in8(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<AddressSpace, pb::uint32>& address_space, const pb::uint64& offset);
LockResponse lock(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<LockState, pb::uint32>& lock_type, const pb::uint32& timeout, const std::string& requested_key);
MapAddressResponse map_address(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<AddressSpace, pb::uint32>& address_space, const pb::uint64& offset, const pb::uint64& map_size, const bool& owner_access, const pb::uint64& suggested_address);
MapTriggerResponse map_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<TriggerLine, pb::int32>& trigger_source, const simple_variant<TriggerLine, pb::int32>& trigger_destination, const pb::uint32& mode);
MemAllocResponse mem_alloc(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::uint32& size);
MemAllocExResponse mem_alloc_ex(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::uint64& size);
MemFreeResponse mem_free(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::uint64& offset);
MoveIn16Response move_in16(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<AddressSpace, pb::uint32>& address_space, const pb::uint64& offset, const pb::uint64& count);
MoveIn32Response move_in32(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<AddressSpace, pb::uint32>& address_space, const pb::uint64& offset, const pb::uint64& count);
MoveIn64Response move_in64(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<AddressSpace, pb::uint32>& address_space, const pb::uint64& offset, const pb::uint64& count);
MoveIn8Response move_in8(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<AddressSpace, pb::uint32>& address_space, const pb::uint64& offset, const pb::uint64& count);
MoveOut16Response move_out16(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<AddressSpace, pb::uint32>& address_space, const pb::uint64& offset, const std::vector<pb::uint32>& buffer);
MoveOut32Response move_out32(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<AddressSpace, pb::uint32>& address_space, const pb::uint64& offset, const std::vector<pb::uint32>& buffer);
MoveOut64Response move_out64(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<AddressSpace, pb::uint32>& address_space, const pb::uint64& offset, const std::vector<pb::uint64>& buffer);
MoveOut8Response move_out8(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<AddressSpace, pb::uint32>& address_space, const pb::uint64& offset, const std::string& buffer);
OpenResponse open(const StubPtr& stub, const std::string& instrument_descriptor, const simple_variant<LockState, pb::uint32>& access_mode, const pb::uint32& open_timeout, const nidevice_grpc::SessionInitializationBehavior& initialization_behavior = nidevice_grpc::SESSION_INITIALIZATION_BEHAVIOR_UNSPECIFIED);
Out16Response out16(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<AddressSpace, pb::uint32>& address_space, const pb::uint64& offset, const pb::uint32& value);
Out32Response out32(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<AddressSpace, pb::uint32>& address_space, const pb::uint64& offset, const pb::uint32& value);
Out64Response out64(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<AddressSpace, pb::uint32>& address_space, const pb::uint64& offset, const pb::uint64& value);
Out8Response out8(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<AddressSpace, pb::uint32>& address_space, const pb::uint64& offset, const pb::uint32& value);
ParseRsrcResponse parse_rsrc(const StubPtr& stub, const std::string& resource_name);
Peek16Response peek16(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::uint64& address);
Peek32Response peek32(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::uint64& address);
Peek64Response peek64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::uint64& address);
Peek8Response peek8(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::uint64& address);
Poke16Response poke16(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::uint64& address, const pb::uint32& value);
Poke32Response poke32(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::uint64& address, const pb::uint32& value);
Poke64Response poke64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::uint64& address, const pb::uint64& value);
Poke8Response poke8(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::uint64& address, const pb::uint32& value);
PxiReserveTriggersResponse pxi_reserve_triggers(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::vector<pb::int32>& trig_buses, const std::vector<pb::int32>& trig_lines);
ReadResponse read(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::uint32& count);
ReadAsyncResponse read_async(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::uint32& count);
ReadSTBResponse read_stb(const StubPtr& stub, const nidevice_grpc::Session& vi);
SetAttributeResponse set_attribute(const StubPtr& stub, const SessionOrEventData& object_handle, const VisaAttribute& attribute_name, const AttributeValueData& attribute_value);
SetBufResponse set_buf(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<BufferMask, pb::uint32>& mask, const pb::uint32& buffer_size);
StatusDescResponse status_desc(const StubPtr& stub, const SessionOrEventData& object_handle, const pb::int32& status_value);
TerminateResponse terminate(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::uint32& degree, const pb::uint32& job_identifier);
UnlockResponse unlock(const StubPtr& stub, const nidevice_grpc::Session& vi);
UnmapAddressResponse unmap_address(const StubPtr& stub, const nidevice_grpc::Session& vi);
UnmapTriggerResponse unmap_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<TriggerLine, pb::int32>& trigger_source, const simple_variant<TriggerLine, pb::int32>& trigger_destination);
UsbControlInResponse usb_control_in(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& bm_request_type, const pb::int32& b_request, const pb::uint32& w_value, const pb::uint32& w_index, const pb::uint32& w_length);
UsbControlOutResponse usb_control_out(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& bm_request_type, const pb::int32& b_request, const pb::uint32& w_value, const pb::uint32& w_index, const std::string& buffer);
VxiCommandQueryResponse vxi_command_query(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<VxiCmdType, pb::uint32>& mode, const pb::uint32& command);
WaitOnEventResponse wait_on_event(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<EventType, pb::uint32>& in_event_type, const pb::uint32& timeout);
WriteResponse write(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::string& buffer);
WriteAsyncResponse write_async(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::string& buffer);

} // namespace visa_grpc::experimental::client

#endif /* VISA_GRPC_CLIENT_H */
