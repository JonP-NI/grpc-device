//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Library wrapper for implementing interactions with VISA
//---------------------------------------------------------------------
#ifndef VISA_GRPC_LIBRARY_WRAPPER_H
#define VISA_GRPC_LIBRARY_WRAPPER_H

#include <grpcpp/grpcpp.h>
#include <visa.h>

namespace visa_grpc {

class VisaLibraryInterface {
 public:
  virtual ~VisaLibraryInterface() {}

  virtual ViStatus AssertIntrSignal(ViSession vi, ViInt16 mode, ViUInt32 statusId) = 0;
  virtual ViStatus AssertTrigger(ViSession vi, ViUInt16 protocol) = 0;
  virtual ViStatus AssertUtilSignal(ViSession vi, ViUInt16 mode) = 0;
  virtual ViStatus Clear(ViSession vi) = 0;
  virtual ViStatus Close(ViObject objectHandle) = 0;
  virtual ViStatus DisableEvent(ViSession vi, ViEventType eventType, ViUInt16 eventMechanism) = 0;
  virtual ViStatus DiscardEvents(ViSession vi, ViEventType eventType, ViUInt16 eventMechanism) = 0;
  virtual ViStatus EnableEvent(ViSession vi, ViEventType eventType, ViUInt16 eventMechanism, ViEventFilter filterContext) = 0;
  virtual ViStatus FindNext(ViFindList findHandle, ViChar instrumentDescriptor[256]) = 0;
  virtual ViStatus FindRsrc(ViSession rsrcManagerHandle, ViConstString expression, ViFindList* findHandle, ViUInt32* returnCount, ViChar instrumentDescriptor[256]) = 0;
  virtual ViStatus Flush(ViSession vi, ViUInt16 mask) = 0;
  virtual ViStatus GetAttribute(ViObject objectHandle, ViAttr attributeName, void* attributeValue) = 0;
  virtual ViStatus GpibCommand(ViSession vi, ViByte buffer[], ViUInt32 count, ViUInt32* returnCount) = 0;
  virtual ViStatus GpibControlATN(ViSession vi, ViUInt16 mode) = 0;
  virtual ViStatus GpibControlREN(ViSession vi, ViUInt16 mode) = 0;
  virtual ViStatus GpibPassControl(ViSession vi, ViUInt16 primaryAddress, ViUInt16 secondaryAddress) = 0;
  virtual ViStatus GpibSendIFC(ViSession vi) = 0;
  virtual ViStatus In16(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViUInt16* value) = 0;
  virtual ViStatus In32(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViUInt32* value) = 0;
  virtual ViStatus In64(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViUInt64* value) = 0;
  virtual ViStatus In8(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViUInt8* value) = 0;
  virtual ViStatus Lock(ViSession vi, ViAccessMode lockType, ViUInt32 timeout, ViConstKeyId requestedKey, ViChar accessKey[256]) = 0;
  virtual ViStatus MapAddress(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize mapSize, ViBoolean ownerAccess, ViAddr suggestedAddress, ViAddr* address) = 0;
  virtual ViStatus MapTrigger(ViSession vi, ViInt16 triggerSource, ViInt16 triggerDestination, ViUInt16 mode) = 0;
  virtual ViStatus MemAlloc(ViSession vi, ViUInt32 size, ViBusAddress* offset) = 0;
  virtual ViStatus MemAllocEx(ViSession vi, ViBusSize size, ViBusAddress64* offset) = 0;
  virtual ViStatus MemFree(ViSession vi, ViBusAddress64 offset) = 0;
  virtual ViStatus MoveIn16(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize count, ViUInt16 buffer[]) = 0;
  virtual ViStatus MoveIn32(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize count, ViUInt32 buffer[]) = 0;
  virtual ViStatus MoveIn64(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize count, ViUInt64 buffer[]) = 0;
  virtual ViStatus MoveIn8(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize count, ViUInt8 buffer[]) = 0;
  virtual ViStatus MoveOut16(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize count, ViUInt16 buffer[]) = 0;
  virtual ViStatus MoveOut32(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize count, ViUInt32 buffer[]) = 0;
  virtual ViStatus MoveOut64(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize count, ViUInt64 buffer[]) = 0;
  virtual ViStatus MoveOut8(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize count, ViUInt8 buffer[]) = 0;
  virtual ViStatus Open(ViSession rsrcManagerHandle, ViConstRsrc instrumentDescriptor, ViAccessMode accessMode, ViUInt32 openTimeout, ViSession* vi) = 0;
  virtual ViStatus OpenDefaultRM(ViSession* rsrcManagerHandle) = 0;
  virtual ViStatus Out16(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViUInt16 value) = 0;
  virtual ViStatus Out32(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViUInt32 value) = 0;
  virtual ViStatus Out64(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViUInt64 value) = 0;
  virtual ViStatus Out8(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViUInt8 value) = 0;
  virtual ViStatus ParseRsrc(ViSession sessionHandle, ViConstRsrc resourceName, ViUInt16* interfaceType, ViUInt16* interfaceNumber, ViChar resourceClass[256], ViChar expandedUnaliasedName[256], ViChar aliasIfExists[256]) = 0;
  virtual void Peek16(ViSession vi, ViAddr address, ViUInt16* value) = 0;
  virtual void Peek32(ViSession vi, ViAddr address, ViUInt32* value) = 0;
  virtual void Peek64(ViSession vi, ViAddr address, ViUInt64* value) = 0;
  virtual void Peek8(ViSession vi, ViAddr address, ViUInt8* value) = 0;
  virtual void Poke16(ViSession vi, ViAddr address, ViUInt16 value) = 0;
  virtual void Poke32(ViSession vi, ViAddr address, ViUInt32 value) = 0;
  virtual void Poke64(ViSession vi, ViAddr address, ViUInt64 value) = 0;
  virtual void Poke8(ViSession vi, ViAddr address, ViUInt8 value) = 0;
  virtual ViStatus PxiReserveTriggers(ViSession vi, ViInt16 cnt, ViInt16 trigBuses[], ViInt16 trigLines[], ViInt16* failureIndex) = 0;
  virtual ViStatus Read(ViSession vi, ViByte buffer[], ViUInt32 count, ViUInt32* returnCount) = 0;
  virtual ViStatus ReadAsync(ViSession vi, ViByte readBuffer[], ViUInt32 count, ViJobId* jobIdentifier) = 0;
  virtual ViStatus ReadSTB(ViSession vi, ViUInt16* statusByte) = 0;
  virtual ViStatus SetAttribute(ViObject objectHandle, ViAttr attributeName, ViAttrState attributeValue) = 0;
  virtual ViStatus SetBuf(ViSession vi, ViUInt16 mask, ViUInt32 bufferSize) = 0;
  virtual ViStatus StatusDesc(ViObject objectHandle, ViStatus statusValue, ViChar statusDescription[256]) = 0;
  virtual ViStatus Terminate(ViSession vi, ViUInt16 degree, ViJobId jobIdentifier) = 0;
  virtual ViStatus Unlock(ViSession vi) = 0;
  virtual ViStatus UnmapAddress(ViSession vi) = 0;
  virtual ViStatus UnmapTrigger(ViSession vi, ViInt16 triggerSource, ViInt16 triggerDestination) = 0;
  virtual ViStatus UsbControlIn(ViSession vi, ViInt16 bmRequestType, ViInt16 bRequest, ViUInt16 wValue, ViUInt16 wIndex, ViUInt16 wLength, ViByte buffer[], ViUInt16* returnCount) = 0;
  virtual ViStatus UsbControlOut(ViSession vi, ViInt16 bmRequestType, ViInt16 bRequest, ViUInt16 wValue, ViUInt16 wIndex, ViUInt16 wLength, ViByte buffer[]) = 0;
  virtual ViStatus VxiCommandQuery(ViSession vi, ViUInt16 mode, ViUInt32 command, ViUInt32* commandResponse) = 0;
  virtual ViStatus WaitOnEvent(ViSession vi, ViEventType inEventType, ViUInt32 timeout, ViEventType* outEventType, ViEvent* eventHandle) = 0;
  virtual ViStatus Write(ViSession vi, ViByte buffer[], ViUInt32 count, ViUInt32* returnCount) = 0;
  virtual ViStatus WriteAsync(ViSession vi, ViByte buffer[], ViUInt32 count, ViJobId* jobIdentifier) = 0;
};

}  // namespace visa_grpc
#endif  // VISA_GRPC_LIBRARY_WRAPPER_H
