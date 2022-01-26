//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for NI-RFMXBT
//---------------------------------------------------------------------
#ifndef NIRFMXBT_GRPC_LIBRARY_H
#define NIRFMXBT_GRPC_LIBRARY_H

#include "nirfmxbt_library_interface.h"

#include <server/shared_library.h>

namespace nirfmxbt_grpc {

class NiRFmxBTLibrary : public nirfmxbt_grpc::NiRFmxBTLibraryInterface {
 public:
  NiRFmxBTLibrary();
  virtual ~NiRFmxBTLibrary();

  ::grpc::Status check_function_exists(std::string functionName);
  int32 ACPCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount);
  int32 ACPCfgBurstSynchronizationType(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 burstSynchronizationType);
  int32 ACPCfgNumberOfOffsets(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 numberOfOffsets);
  int32 ACPCfgOffsetChannelMode(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 offsetChannelMode);
  int32 ACPFetchAbsolutePowerTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 absolutePower[], int32 arraySize, int32* actualArraySize);
  int32 ACPFetchMaskTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 limitWithExceptionMask[], float32 limitWithoutExceptionMask[], int32 arraySize, int32* actualArraySize);
  int32 ACPFetchMeasurementStatus(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32* measurementStatus);
  int32 ACPFetchOffsetMeasurement(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* lowerAbsolutePower, float64* upperAbsolutePower, float64* lowerRelativePower, float64* upperRelativePower, float64* lowerMargin, float64* upperMargin);
  int32 ACPFetchOffsetMeasurementArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64 lowerAbsolutePower[], float64 upperAbsolutePower[], float64 lowerRelativePower[], float64 upperRelativePower[], float64 lowerMargin[], float64 upperMargin[], int32 arraySize, int32* actualArraySize);
  int32 ACPFetchReferenceChannelPower(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* referenceChannelPower);
  int32 ACPFetchSpectrum(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 spectrum[], int32 arraySize, int32* actualArraySize);
  int32 AbortMeasurements(niRFmxInstrHandle instrumentHandle, char selectorString[]);
  int32 AnalyzeIQ1Waveform(niRFmxInstrHandle instrumentHandle, char selectorString[], char resultName[], float64 x0, float64 dx, NIComplexSingle iq[], int32 arraySize, int32 reset, int64 reserved);
  int32 AutoDetectSignal(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout);
  int32 AutoLevel(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 measurementInterval, float64* referenceLevel);
  int32 BuildOffsetString(char selectorString[], int32 offsetNumber, int32 selectorStringOutLength, char selectorStringOut[]);
  int32 BuildSignalString(char signalName[], char resultName[], int32 selectorStringLength, char selectorString[]);
  int32 CfgChannelNumber(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 channelNumber);
  int32 CfgDataRate(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 dataRate);
  int32 CfgDigitalEdgeTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[], char digitalEdgeSource[], int32 digitalEdge, float64 triggerDelay, int32 enableTrigger);
  int32 CfgExternalAttenuation(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 externalAttenuation);
  int32 CfgFrequency(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 centerFrequency);
  int32 CfgFrequencyChannelNumber(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 standard, int32 channelNumber);
  int32 CfgFrequencyReference(niRFmxInstrHandle instrumentHandle, char channelName[], char frequencyReferenceSource[], float64 frequencyReferenceFrequency);
  int32 CfgIQPowerEdgeTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[], char iqPowerEdgeSource[], int32 iqPowerEdgeSlope, float64 iqPowerEdgeLevel, float64 triggerDelay, int32 triggerMinQuietTimeMode, float64 triggerMinQuietTimeDuration, int32 iqPowerEdgeLevelType, int32 enableTrigger);
  int32 CfgLEDirectionFinding(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 directionFindingMode, float64 cteLength, float64 cteSlotDuration);
  int32 CfgMechanicalAttenuation(niRFmxInstrHandle instrumentHandle, char channelName[], int32 mechanicalAttenuationAuto, float64 mechanicalAttenuationValue);
  int32 CfgPacketType(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 packetType);
  int32 CfgPayloadBitPattern(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 payloadBitPattern);
  int32 CfgPayloadLength(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 payloadLengthMode, int32 payloadLength);
  int32 CfgRF(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 centerFrequency, float64 referenceLevel, float64 externalAttenuation);
  int32 CfgRFAttenuation(niRFmxInstrHandle instrumentHandle, char channelName[], int32 rfAttenuationAuto, float64 rfAttenuationValue);
  int32 CfgReferenceLevel(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 referenceLevel);
  int32 CfgSoftwareEdgeTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 triggerDelay, int32 enableTrigger);
  int32 CheckMeasurementStatus(niRFmxInstrHandle instrumentHandle, char selectorString[], int32* isDone);
  int32 ClearAllNamedResults(niRFmxInstrHandle instrumentHandle, char selectorString[]);
  int32 ClearNamedResult(niRFmxInstrHandle instrumentHandle, char selectorString[]);
  int32 CloneSignalConfiguration(niRFmxInstrHandle instrumentHandle, char oldSignalName[], char newSignalName[]);
  int32 Close(niRFmxInstrHandle instrumentHandle, int32 forceDestroy);
  int32 Commit(niRFmxInstrHandle instrumentHandle, char selectorString[]);
  int32 CreateSignalConfiguration(niRFmxInstrHandle instrumentHandle, char signalName[]);
  int32 DeleteSignalConfiguration(niRFmxInstrHandle instrumentHandle, char signalName[]);
  int32 DisableTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[]);
  int32 FrequencyRangeCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount);
  int32 FrequencyRangeCfgSpan(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 span);
  int32 FrequencyRangeFetchMeasurement(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* highFrequency, float64* lowFrequency);
  int32 FrequencyRangeFetchSpectrum(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 spectrum[], int32 arraySize, int32* actualArraySize);
  int32 GetAllNamedResultNames(niRFmxInstrHandle instrumentHandle, char selectorString[], char resultNames[], int32 resultNamesBufferSize, int32* actualResultNamesSize, int32* defaultResultExists);
  int32 GetAttributeF32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32* attrVal);
  int32 GetAttributeF32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32 attrVal[], int32 arraySize, int32* actualArraySize);
  int32 GetAttributeF64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64* attrVal);
  int32 GetAttributeF64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64 attrVal[], int32 arraySize, int32* actualArraySize);
  int32 GetAttributeI16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int16* attrVal);
  int32 GetAttributeI32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32* attrVal);
  int32 GetAttributeI32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 attrVal[], int32 arraySize, int32* actualArraySize);
  int32 GetAttributeI64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64* attrVal);
  int32 GetAttributeI64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64 attrVal[], int32 arraySize, int32* actualArraySize);
  int32 GetAttributeI8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8* attrVal);
  int32 GetAttributeI8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8 attrVal[], int32 arraySize, int32* actualArraySize);
  int32 GetAttributeNIComplexDoubleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexDouble attrVal[], int32 arraySize, int32* actualArraySize);
  int32 GetAttributeNIComplexSingleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexSingle attrVal[], int32 arraySize, int32* actualArraySize);
  int32 GetAttributeString(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 arraySize, char attrVal[]);
  int32 GetAttributeU16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt16* attrVal);
  int32 GetAttributeU32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32* attrVal);
  int32 GetAttributeU32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32 attrVal[], int32 arraySize, int32* actualArraySize);
  int32 GetAttributeU64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt64 attrVal[], int32 arraySize, int32* actualArraySize);
  int32 GetAttributeU8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8* attrVal);
  int32 GetAttributeU8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8 attrVal[], int32 arraySize, int32* actualArraySize);
  int32 GetError(niRFmxInstrHandle instrumentHandle, int32* errorCode, int32 errorDescriptionBufferSize, char errorDescription[]);
  int32 GetErrorString(niRFmxInstrHandle instrumentHandle, int32 errorCode, int32 errorDescriptionBufferSize, char errorDescription[]);
  int32 Initialize(char resourceName[], char optionString[], niRFmxInstrHandle* handleOut, int32* isNewSession);
  int32 InitializeFromNIRFSASession(uInt32 nirfsaSession, niRFmxInstrHandle* handleOut);
  int32 Initiate(niRFmxInstrHandle instrumentHandle, char selectorString[], char resultName[]);
  int32 ModAccCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount);
  int32 ModAccCfgBurstSynchronizationType(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 burstSynchronizationType);
  int32 ModAccFetchConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle constellation[], int32 arraySize, int32* actualArraySize);
  int32 ModAccFetchDEVM(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* peakRMSDEVMMaximum, float64* peakDEVMMaximum, float64* ninetyninePercentDEVM);
  int32 ModAccFetchDEVMMagnitudeError(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* averageRMSMagnitudeErrorMean, float64* peakRMSMagnitudeErrorMaximum);
  int32 ModAccFetchDEVMPerSymbolTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 devmPerSymbol[], int32 arraySize, int32* actualArraySize);
  int32 ModAccFetchDEVMPhaseError(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* averageRMSPhaseErrorMean, float64* peakRMSPhaseErrorMaximum);
  int32 ModAccFetchDemodulatedBitTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int8 demodulatedBits[], int32 arraySize, int32* actualArraySize);
  int32 ModAccFetchDf1(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* df1avgMaximum, float64* df1avgMinimum);
  int32 ModAccFetchDf1maxTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 time[], float32 df1max[], int32 arraySize, int32* actualArraySize);
  int32 ModAccFetchDf2(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* df2avgMinimum, float64* percentageOfSymbolsAboveDf2maxThreshold);
  int32 ModAccFetchDf2maxTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 time[], float32 df2max[], int32 arraySize, int32* actualArraySize);
  int32 ModAccFetchFrequencyErrorBR(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* initialFrequencyErrorMaximum, float64* peakFrequencyDriftMaximum, float64* peakFrequencyDriftRateMaximum);
  int32 ModAccFetchFrequencyErrorEDR(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* headerFrequencyErrorWiMaximum, float64* peakFrequencyErrorWiPlusW0Maximum, float64* peakFrequencyErrorW0Maximum);
  int32 ModAccFetchFrequencyErrorLE(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* peakFrequencyErrorMaximum, float64* initialFrequencyDriftMaximum, float64* peakFrequencyDriftMaximum, float64* peakFrequencyDriftRateMaximum);
  int32 ModAccFetchFrequencyErrorTraceBR(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 time[], float32 frequencyError[], int32 arraySize, int32* actualArraySize);
  int32 ModAccFetchFrequencyErrorTraceLE(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 time[], float32 frequencyError[], int32 arraySize, int32* actualArraySize);
  int32 ModAccFetchFrequencyErrorWiPlusW0TraceEDR(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 time[], float32 frequencyErrorWiPlusW0[], int32 arraySize, int32* actualArraySize);
  int32 ModAccFetchFrequencyTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 frequency[], int32 arraySize, int32* actualArraySize);
  int32 ModAccFetchRMSDEVMTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 rmsdevm[], int32 arraySize, int32* actualArraySize);
  int32 ResetAttribute(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID);
  int32 ResetToDefault(niRFmxInstrHandle instrumentHandle, char selectorString[]);
  int32 SelectMeasurements(niRFmxInstrHandle instrumentHandle, char selectorString[], uInt32 measurements, int32 enableAllTraces);
  int32 SendSoftwareEdgeTrigger(niRFmxInstrHandle instrumentHandle);
  int32 SetAttributeF32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32 attrVal);
  int32 SetAttributeF32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32 attrVal[], int32 arraySize);
  int32 SetAttributeF64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64 attrVal);
  int32 SetAttributeF64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64 attrVal[], int32 arraySize);
  int32 SetAttributeI16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int16 attrVal);
  int32 SetAttributeI32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 attrVal);
  int32 SetAttributeI32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 attrVal[], int32 arraySize);
  int32 SetAttributeI64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64 attrVal);
  int32 SetAttributeI64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64 attrVal[], int32 arraySize);
  int32 SetAttributeI8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8 attrVal);
  int32 SetAttributeI8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8 attrVal[], int32 arraySize);
  int32 SetAttributeNIComplexDoubleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexDouble attrVal[], int32 arraySize);
  int32 SetAttributeNIComplexSingleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexSingle attrVal[], int32 arraySize);
  int32 SetAttributeString(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, char attrVal[]);
  int32 SetAttributeU16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt16 attrVal);
  int32 SetAttributeU32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32 attrVal);
  int32 SetAttributeU32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32 attrVal[], int32 arraySize);
  int32 SetAttributeU64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt64 attrVal[], int32 arraySize);
  int32 SetAttributeU8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8 attrVal);
  int32 SetAttributeU8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8 attrVal[], int32 arraySize);
  int32 TXPCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount);
  int32 TXPCfgBurstSynchronizationType(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 burstSynchronizationType);
  int32 TXPFetchEDRPowers(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* edrgfskAveragePowerMean, float64* edrdpskAveragePowerMean, float64* edr_DPSK_GFSKAveragePowerRatioMean);
  int32 TXPFetchLECTEReferencePeriodPowers(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* referencePeriodAveragePowerMean, float64* referencePeriodPeakAbsolutePowerDeviationMaximum);
  int32 TXPFetchLECTETransmitSlotPowers(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* transmitSlotAveragePowerMean, float64* transmitSlotPeakAbsolutePowerDeviationMaximum);
  int32 TXPFetchLECTETransmitSlotPowersArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64 transmitSlotAveragePowerMean[], float64 transmitSlotPeakAbsolutePowerDeviationMaximum[], int32 arraySize, int32* actualArraySize);
  int32 TXPFetchPowerTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 power[], int32 arraySize, int32* actualArraySize);
  int32 TXPFetchPowers(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* averagePowerMean, float64* averagePowerMaximum, float64* averagePowerMinimum, float64* peakToAveragePowerRatioMaximum);
  int32 WaitForAcquisitionComplete(niRFmxInstrHandle instrumentHandle, float64 timeout);
  int32 WaitForMeasurementComplete(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout);

 private:
  using ACPCfgAveragingPtr = decltype(&RFmxBT_ACPCfgAveraging);
  using ACPCfgBurstSynchronizationTypePtr = decltype(&RFmxBT_ACPCfgBurstSynchronizationType);
  using ACPCfgNumberOfOffsetsPtr = decltype(&RFmxBT_ACPCfgNumberOfOffsets);
  using ACPCfgOffsetChannelModePtr = decltype(&RFmxBT_ACPCfgOffsetChannelMode);
  using ACPFetchAbsolutePowerTracePtr = decltype(&RFmxBT_ACPFetchAbsolutePowerTrace);
  using ACPFetchMaskTracePtr = decltype(&RFmxBT_ACPFetchMaskTrace);
  using ACPFetchMeasurementStatusPtr = decltype(&RFmxBT_ACPFetchMeasurementStatus);
  using ACPFetchOffsetMeasurementPtr = decltype(&RFmxBT_ACPFetchOffsetMeasurement);
  using ACPFetchOffsetMeasurementArrayPtr = decltype(&RFmxBT_ACPFetchOffsetMeasurementArray);
  using ACPFetchReferenceChannelPowerPtr = decltype(&RFmxBT_ACPFetchReferenceChannelPower);
  using ACPFetchSpectrumPtr = decltype(&RFmxBT_ACPFetchSpectrum);
  using AbortMeasurementsPtr = decltype(&RFmxBT_AbortMeasurements);
  using AnalyzeIQ1WaveformPtr = decltype(&RFmxBT_AnalyzeIQ1Waveform);
  using AutoDetectSignalPtr = decltype(&RFmxBT_AutoDetectSignal);
  using AutoLevelPtr = decltype(&RFmxBT_AutoLevel);
  using BuildOffsetStringPtr = decltype(&RFmxBT_BuildOffsetString);
  using BuildSignalStringPtr = decltype(&RFmxBT_BuildSignalString);
  using CfgChannelNumberPtr = decltype(&RFmxBT_CfgChannelNumber);
  using CfgDataRatePtr = decltype(&RFmxBT_CfgDataRate);
  using CfgDigitalEdgeTriggerPtr = decltype(&RFmxBT_CfgDigitalEdgeTrigger);
  using CfgExternalAttenuationPtr = decltype(&RFmxBT_CfgExternalAttenuation);
  using CfgFrequencyPtr = decltype(&RFmxBT_CfgFrequency);
  using CfgFrequencyChannelNumberPtr = decltype(&RFmxBT_CfgFrequencyChannelNumber);
  using CfgFrequencyReferencePtr = decltype(&RFmxBT_CfgFrequencyReference);
  using CfgIQPowerEdgeTriggerPtr = decltype(&RFmxBT_CfgIQPowerEdgeTrigger);
  using CfgLEDirectionFindingPtr = decltype(&RFmxBT_CfgLEDirectionFinding);
  using CfgMechanicalAttenuationPtr = decltype(&RFmxBT_CfgMechanicalAttenuation);
  using CfgPacketTypePtr = decltype(&RFmxBT_CfgPacketType);
  using CfgPayloadBitPatternPtr = decltype(&RFmxBT_CfgPayloadBitPattern);
  using CfgPayloadLengthPtr = decltype(&RFmxBT_CfgPayloadLength);
  using CfgRFPtr = decltype(&RFmxBT_CfgRF);
  using CfgRFAttenuationPtr = decltype(&RFmxBT_CfgRFAttenuation);
  using CfgReferenceLevelPtr = decltype(&RFmxBT_CfgReferenceLevel);
  using CfgSoftwareEdgeTriggerPtr = decltype(&RFmxBT_CfgSoftwareEdgeTrigger);
  using CheckMeasurementStatusPtr = decltype(&RFmxBT_CheckMeasurementStatus);
  using ClearAllNamedResultsPtr = decltype(&RFmxBT_ClearAllNamedResults);
  using ClearNamedResultPtr = decltype(&RFmxBT_ClearNamedResult);
  using CloneSignalConfigurationPtr = decltype(&RFmxBT_CloneSignalConfiguration);
  using ClosePtr = decltype(&RFmxBT_Close);
  using CommitPtr = decltype(&RFmxBT_Commit);
  using CreateSignalConfigurationPtr = decltype(&RFmxBT_CreateSignalConfiguration);
  using DeleteSignalConfigurationPtr = decltype(&RFmxBT_DeleteSignalConfiguration);
  using DisableTriggerPtr = decltype(&RFmxBT_DisableTrigger);
  using FrequencyRangeCfgAveragingPtr = decltype(&RFmxBT_FrequencyRangeCfgAveraging);
  using FrequencyRangeCfgSpanPtr = decltype(&RFmxBT_FrequencyRangeCfgSpan);
  using FrequencyRangeFetchMeasurementPtr = decltype(&RFmxBT_FrequencyRangeFetchMeasurement);
  using FrequencyRangeFetchSpectrumPtr = decltype(&RFmxBT_FrequencyRangeFetchSpectrum);
  using GetAllNamedResultNamesPtr = decltype(&RFmxBT_GetAllNamedResultNames);
  using GetAttributeF32Ptr = decltype(&RFmxBT_GetAttributeF32);
  using GetAttributeF32ArrayPtr = decltype(&RFmxBT_GetAttributeF32Array);
  using GetAttributeF64Ptr = decltype(&RFmxBT_GetAttributeF64);
  using GetAttributeF64ArrayPtr = decltype(&RFmxBT_GetAttributeF64Array);
  using GetAttributeI16Ptr = decltype(&RFmxBT_GetAttributeI16);
  using GetAttributeI32Ptr = decltype(&RFmxBT_GetAttributeI32);
  using GetAttributeI32ArrayPtr = decltype(&RFmxBT_GetAttributeI32Array);
  using GetAttributeI64Ptr = decltype(&RFmxBT_GetAttributeI64);
  using GetAttributeI64ArrayPtr = decltype(&RFmxBT_GetAttributeI64Array);
  using GetAttributeI8Ptr = decltype(&RFmxBT_GetAttributeI8);
  using GetAttributeI8ArrayPtr = decltype(&RFmxBT_GetAttributeI8Array);
  using GetAttributeNIComplexDoubleArrayPtr = decltype(&RFmxBT_GetAttributeNIComplexDoubleArray);
  using GetAttributeNIComplexSingleArrayPtr = decltype(&RFmxBT_GetAttributeNIComplexSingleArray);
  using GetAttributeStringPtr = decltype(&RFmxBT_GetAttributeString);
  using GetAttributeU16Ptr = decltype(&RFmxBT_GetAttributeU16);
  using GetAttributeU32Ptr = decltype(&RFmxBT_GetAttributeU32);
  using GetAttributeU32ArrayPtr = decltype(&RFmxBT_GetAttributeU32Array);
  using GetAttributeU64ArrayPtr = decltype(&RFmxBT_GetAttributeU64Array);
  using GetAttributeU8Ptr = decltype(&RFmxBT_GetAttributeU8);
  using GetAttributeU8ArrayPtr = decltype(&RFmxBT_GetAttributeU8Array);
  using GetErrorPtr = decltype(&RFmxBT_GetError);
  using GetErrorStringPtr = decltype(&RFmxBT_GetErrorString);
  using InitializePtr = decltype(&RFmxBT_Initialize);
  using InitializeFromNIRFSASessionPtr = decltype(&RFmxBT_InitializeFromNIRFSASession);
  using InitiatePtr = decltype(&RFmxBT_Initiate);
  using ModAccCfgAveragingPtr = decltype(&RFmxBT_ModAccCfgAveraging);
  using ModAccCfgBurstSynchronizationTypePtr = decltype(&RFmxBT_ModAccCfgBurstSynchronizationType);
  using ModAccFetchConstellationTracePtr = decltype(&RFmxBT_ModAccFetchConstellationTrace);
  using ModAccFetchDEVMPtr = decltype(&RFmxBT_ModAccFetchDEVM);
  using ModAccFetchDEVMMagnitudeErrorPtr = decltype(&RFmxBT_ModAccFetchDEVMMagnitudeError);
  using ModAccFetchDEVMPerSymbolTracePtr = decltype(&RFmxBT_ModAccFetchDEVMPerSymbolTrace);
  using ModAccFetchDEVMPhaseErrorPtr = decltype(&RFmxBT_ModAccFetchDEVMPhaseError);
  using ModAccFetchDemodulatedBitTracePtr = decltype(&RFmxBT_ModAccFetchDemodulatedBitTrace);
  using ModAccFetchDf1Ptr = decltype(&RFmxBT_ModAccFetchDf1);
  using ModAccFetchDf1maxTracePtr = decltype(&RFmxBT_ModAccFetchDf1maxTrace);
  using ModAccFetchDf2Ptr = decltype(&RFmxBT_ModAccFetchDf2);
  using ModAccFetchDf2maxTracePtr = decltype(&RFmxBT_ModAccFetchDf2maxTrace);
  using ModAccFetchFrequencyErrorBRPtr = decltype(&RFmxBT_ModAccFetchFrequencyErrorBR);
  using ModAccFetchFrequencyErrorEDRPtr = decltype(&RFmxBT_ModAccFetchFrequencyErrorEDR);
  using ModAccFetchFrequencyErrorLEPtr = decltype(&RFmxBT_ModAccFetchFrequencyErrorLE);
  using ModAccFetchFrequencyErrorTraceBRPtr = decltype(&RFmxBT_ModAccFetchFrequencyErrorTraceBR);
  using ModAccFetchFrequencyErrorTraceLEPtr = decltype(&RFmxBT_ModAccFetchFrequencyErrorTraceLE);
  using ModAccFetchFrequencyErrorWiPlusW0TraceEDRPtr = decltype(&RFmxBT_ModAccFetchFrequencyErrorWiPlusW0TraceEDR);
  using ModAccFetchFrequencyTracePtr = decltype(&RFmxBT_ModAccFetchFrequencyTrace);
  using ModAccFetchRMSDEVMTracePtr = decltype(&RFmxBT_ModAccFetchRMSDEVMTrace);
  using ResetAttributePtr = decltype(&RFmxBT_ResetAttribute);
  using ResetToDefaultPtr = decltype(&RFmxBT_ResetToDefault);
  using SelectMeasurementsPtr = decltype(&RFmxBT_SelectMeasurements);
  using SendSoftwareEdgeTriggerPtr = decltype(&RFmxBT_SendSoftwareEdgeTrigger);
  using SetAttributeF32Ptr = decltype(&RFmxBT_SetAttributeF32);
  using SetAttributeF32ArrayPtr = decltype(&RFmxBT_SetAttributeF32Array);
  using SetAttributeF64Ptr = decltype(&RFmxBT_SetAttributeF64);
  using SetAttributeF64ArrayPtr = decltype(&RFmxBT_SetAttributeF64Array);
  using SetAttributeI16Ptr = decltype(&RFmxBT_SetAttributeI16);
  using SetAttributeI32Ptr = decltype(&RFmxBT_SetAttributeI32);
  using SetAttributeI32ArrayPtr = decltype(&RFmxBT_SetAttributeI32Array);
  using SetAttributeI64Ptr = decltype(&RFmxBT_SetAttributeI64);
  using SetAttributeI64ArrayPtr = decltype(&RFmxBT_SetAttributeI64Array);
  using SetAttributeI8Ptr = decltype(&RFmxBT_SetAttributeI8);
  using SetAttributeI8ArrayPtr = decltype(&RFmxBT_SetAttributeI8Array);
  using SetAttributeNIComplexDoubleArrayPtr = decltype(&RFmxBT_SetAttributeNIComplexDoubleArray);
  using SetAttributeNIComplexSingleArrayPtr = decltype(&RFmxBT_SetAttributeNIComplexSingleArray);
  using SetAttributeStringPtr = decltype(&RFmxBT_SetAttributeString);
  using SetAttributeU16Ptr = decltype(&RFmxBT_SetAttributeU16);
  using SetAttributeU32Ptr = decltype(&RFmxBT_SetAttributeU32);
  using SetAttributeU32ArrayPtr = decltype(&RFmxBT_SetAttributeU32Array);
  using SetAttributeU64ArrayPtr = decltype(&RFmxBT_SetAttributeU64Array);
  using SetAttributeU8Ptr = decltype(&RFmxBT_SetAttributeU8);
  using SetAttributeU8ArrayPtr = decltype(&RFmxBT_SetAttributeU8Array);
  using TXPCfgAveragingPtr = decltype(&RFmxBT_TXPCfgAveraging);
  using TXPCfgBurstSynchronizationTypePtr = decltype(&RFmxBT_TXPCfgBurstSynchronizationType);
  using TXPFetchEDRPowersPtr = decltype(&RFmxBT_TXPFetchEDRPowers);
  using TXPFetchLECTEReferencePeriodPowersPtr = decltype(&RFmxBT_TXPFetchLECTEReferencePeriodPowers);
  using TXPFetchLECTETransmitSlotPowersPtr = decltype(&RFmxBT_TXPFetchLECTETransmitSlotPowers);
  using TXPFetchLECTETransmitSlotPowersArrayPtr = decltype(&RFmxBT_TXPFetchLECTETransmitSlotPowersArray);
  using TXPFetchPowerTracePtr = decltype(&RFmxBT_TXPFetchPowerTrace);
  using TXPFetchPowersPtr = decltype(&RFmxBT_TXPFetchPowers);
  using WaitForAcquisitionCompletePtr = decltype(&RFmxBT_WaitForAcquisitionComplete);
  using WaitForMeasurementCompletePtr = decltype(&RFmxBT_WaitForMeasurementComplete);

  typedef struct FunctionPointers {
    ACPCfgAveragingPtr ACPCfgAveraging;
    ACPCfgBurstSynchronizationTypePtr ACPCfgBurstSynchronizationType;
    ACPCfgNumberOfOffsetsPtr ACPCfgNumberOfOffsets;
    ACPCfgOffsetChannelModePtr ACPCfgOffsetChannelMode;
    ACPFetchAbsolutePowerTracePtr ACPFetchAbsolutePowerTrace;
    ACPFetchMaskTracePtr ACPFetchMaskTrace;
    ACPFetchMeasurementStatusPtr ACPFetchMeasurementStatus;
    ACPFetchOffsetMeasurementPtr ACPFetchOffsetMeasurement;
    ACPFetchOffsetMeasurementArrayPtr ACPFetchOffsetMeasurementArray;
    ACPFetchReferenceChannelPowerPtr ACPFetchReferenceChannelPower;
    ACPFetchSpectrumPtr ACPFetchSpectrum;
    AbortMeasurementsPtr AbortMeasurements;
    AnalyzeIQ1WaveformPtr AnalyzeIQ1Waveform;
    AutoDetectSignalPtr AutoDetectSignal;
    AutoLevelPtr AutoLevel;
    BuildOffsetStringPtr BuildOffsetString;
    BuildSignalStringPtr BuildSignalString;
    CfgChannelNumberPtr CfgChannelNumber;
    CfgDataRatePtr CfgDataRate;
    CfgDigitalEdgeTriggerPtr CfgDigitalEdgeTrigger;
    CfgExternalAttenuationPtr CfgExternalAttenuation;
    CfgFrequencyPtr CfgFrequency;
    CfgFrequencyChannelNumberPtr CfgFrequencyChannelNumber;
    CfgFrequencyReferencePtr CfgFrequencyReference;
    CfgIQPowerEdgeTriggerPtr CfgIQPowerEdgeTrigger;
    CfgLEDirectionFindingPtr CfgLEDirectionFinding;
    CfgMechanicalAttenuationPtr CfgMechanicalAttenuation;
    CfgPacketTypePtr CfgPacketType;
    CfgPayloadBitPatternPtr CfgPayloadBitPattern;
    CfgPayloadLengthPtr CfgPayloadLength;
    CfgRFPtr CfgRF;
    CfgRFAttenuationPtr CfgRFAttenuation;
    CfgReferenceLevelPtr CfgReferenceLevel;
    CfgSoftwareEdgeTriggerPtr CfgSoftwareEdgeTrigger;
    CheckMeasurementStatusPtr CheckMeasurementStatus;
    ClearAllNamedResultsPtr ClearAllNamedResults;
    ClearNamedResultPtr ClearNamedResult;
    CloneSignalConfigurationPtr CloneSignalConfiguration;
    ClosePtr Close;
    CommitPtr Commit;
    CreateSignalConfigurationPtr CreateSignalConfiguration;
    DeleteSignalConfigurationPtr DeleteSignalConfiguration;
    DisableTriggerPtr DisableTrigger;
    FrequencyRangeCfgAveragingPtr FrequencyRangeCfgAveraging;
    FrequencyRangeCfgSpanPtr FrequencyRangeCfgSpan;
    FrequencyRangeFetchMeasurementPtr FrequencyRangeFetchMeasurement;
    FrequencyRangeFetchSpectrumPtr FrequencyRangeFetchSpectrum;
    GetAllNamedResultNamesPtr GetAllNamedResultNames;
    GetAttributeF32Ptr GetAttributeF32;
    GetAttributeF32ArrayPtr GetAttributeF32Array;
    GetAttributeF64Ptr GetAttributeF64;
    GetAttributeF64ArrayPtr GetAttributeF64Array;
    GetAttributeI16Ptr GetAttributeI16;
    GetAttributeI32Ptr GetAttributeI32;
    GetAttributeI32ArrayPtr GetAttributeI32Array;
    GetAttributeI64Ptr GetAttributeI64;
    GetAttributeI64ArrayPtr GetAttributeI64Array;
    GetAttributeI8Ptr GetAttributeI8;
    GetAttributeI8ArrayPtr GetAttributeI8Array;
    GetAttributeNIComplexDoubleArrayPtr GetAttributeNIComplexDoubleArray;
    GetAttributeNIComplexSingleArrayPtr GetAttributeNIComplexSingleArray;
    GetAttributeStringPtr GetAttributeString;
    GetAttributeU16Ptr GetAttributeU16;
    GetAttributeU32Ptr GetAttributeU32;
    GetAttributeU32ArrayPtr GetAttributeU32Array;
    GetAttributeU64ArrayPtr GetAttributeU64Array;
    GetAttributeU8Ptr GetAttributeU8;
    GetAttributeU8ArrayPtr GetAttributeU8Array;
    GetErrorPtr GetError;
    GetErrorStringPtr GetErrorString;
    InitializePtr Initialize;
    InitializeFromNIRFSASessionPtr InitializeFromNIRFSASession;
    InitiatePtr Initiate;
    ModAccCfgAveragingPtr ModAccCfgAveraging;
    ModAccCfgBurstSynchronizationTypePtr ModAccCfgBurstSynchronizationType;
    ModAccFetchConstellationTracePtr ModAccFetchConstellationTrace;
    ModAccFetchDEVMPtr ModAccFetchDEVM;
    ModAccFetchDEVMMagnitudeErrorPtr ModAccFetchDEVMMagnitudeError;
    ModAccFetchDEVMPerSymbolTracePtr ModAccFetchDEVMPerSymbolTrace;
    ModAccFetchDEVMPhaseErrorPtr ModAccFetchDEVMPhaseError;
    ModAccFetchDemodulatedBitTracePtr ModAccFetchDemodulatedBitTrace;
    ModAccFetchDf1Ptr ModAccFetchDf1;
    ModAccFetchDf1maxTracePtr ModAccFetchDf1maxTrace;
    ModAccFetchDf2Ptr ModAccFetchDf2;
    ModAccFetchDf2maxTracePtr ModAccFetchDf2maxTrace;
    ModAccFetchFrequencyErrorBRPtr ModAccFetchFrequencyErrorBR;
    ModAccFetchFrequencyErrorEDRPtr ModAccFetchFrequencyErrorEDR;
    ModAccFetchFrequencyErrorLEPtr ModAccFetchFrequencyErrorLE;
    ModAccFetchFrequencyErrorTraceBRPtr ModAccFetchFrequencyErrorTraceBR;
    ModAccFetchFrequencyErrorTraceLEPtr ModAccFetchFrequencyErrorTraceLE;
    ModAccFetchFrequencyErrorWiPlusW0TraceEDRPtr ModAccFetchFrequencyErrorWiPlusW0TraceEDR;
    ModAccFetchFrequencyTracePtr ModAccFetchFrequencyTrace;
    ModAccFetchRMSDEVMTracePtr ModAccFetchRMSDEVMTrace;
    ResetAttributePtr ResetAttribute;
    ResetToDefaultPtr ResetToDefault;
    SelectMeasurementsPtr SelectMeasurements;
    SendSoftwareEdgeTriggerPtr SendSoftwareEdgeTrigger;
    SetAttributeF32Ptr SetAttributeF32;
    SetAttributeF32ArrayPtr SetAttributeF32Array;
    SetAttributeF64Ptr SetAttributeF64;
    SetAttributeF64ArrayPtr SetAttributeF64Array;
    SetAttributeI16Ptr SetAttributeI16;
    SetAttributeI32Ptr SetAttributeI32;
    SetAttributeI32ArrayPtr SetAttributeI32Array;
    SetAttributeI64Ptr SetAttributeI64;
    SetAttributeI64ArrayPtr SetAttributeI64Array;
    SetAttributeI8Ptr SetAttributeI8;
    SetAttributeI8ArrayPtr SetAttributeI8Array;
    SetAttributeNIComplexDoubleArrayPtr SetAttributeNIComplexDoubleArray;
    SetAttributeNIComplexSingleArrayPtr SetAttributeNIComplexSingleArray;
    SetAttributeStringPtr SetAttributeString;
    SetAttributeU16Ptr SetAttributeU16;
    SetAttributeU32Ptr SetAttributeU32;
    SetAttributeU32ArrayPtr SetAttributeU32Array;
    SetAttributeU64ArrayPtr SetAttributeU64Array;
    SetAttributeU8Ptr SetAttributeU8;
    SetAttributeU8ArrayPtr SetAttributeU8Array;
    TXPCfgAveragingPtr TXPCfgAveraging;
    TXPCfgBurstSynchronizationTypePtr TXPCfgBurstSynchronizationType;
    TXPFetchEDRPowersPtr TXPFetchEDRPowers;
    TXPFetchLECTEReferencePeriodPowersPtr TXPFetchLECTEReferencePeriodPowers;
    TXPFetchLECTETransmitSlotPowersPtr TXPFetchLECTETransmitSlotPowers;
    TXPFetchLECTETransmitSlotPowersArrayPtr TXPFetchLECTETransmitSlotPowersArray;
    TXPFetchPowerTracePtr TXPFetchPowerTrace;
    TXPFetchPowersPtr TXPFetchPowers;
    WaitForAcquisitionCompletePtr WaitForAcquisitionComplete;
    WaitForMeasurementCompletePtr WaitForMeasurementComplete;
  } FunctionLoadStatus;

  nidevice_grpc::SharedLibrary shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace nirfmxbt_grpc

#endif  // NIRFMXBT_GRPC_LIBRARY_H
