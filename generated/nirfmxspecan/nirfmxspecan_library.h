//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for NI-RFMXSPECAN
//---------------------------------------------------------------------
#ifndef NIRFMXSPECAN_GRPC_LIBRARY_H
#define NIRFMXSPECAN_GRPC_LIBRARY_H

#include "nirfmxspecan_library_interface.h"

#include <server/shared_library.h>

namespace nirfmxspecan_grpc {

class NiRFmxSpecAnLibrary : public nirfmxspecan_grpc::NiRFmxSpecAnLibraryInterface {
 public:
  NiRFmxSpecAnLibrary();
  virtual ~NiRFmxSpecAnLibrary();

  ::grpc::Status check_function_exists(std::string functionName);
  int32 Close(niRFmxInstrHandle instrumentHandle, int32 forceDestroy);
  int32 GetError(niRFmxInstrHandle instrumentHandle, int32* errorCode, int32 errorDescriptionBufferSize, char errorDescription[]);
  int32 GetErrorString(niRFmxInstrHandle instrumentHandle, int32 errorCode, int32 errorDescriptionBufferSize, char errorDescription[]);
  int32 Initialize(char resourceName[], char optionString[], niRFmxInstrHandle* handleOut, int32* isNewSession);

 private:
  using ClosePtr = decltype(&RFmxSpecAn_Close);
  using GetErrorPtr = decltype(&RFmxSpecAn_GetError);
  using GetErrorStringPtr = decltype(&RFmxSpecAn_GetErrorString);
  using InitializePtr = decltype(&RFmxSpecAn_Initialize);

  typedef struct FunctionPointers {
    ClosePtr Close;
    GetErrorPtr GetError;
    GetErrorStringPtr GetErrorString;
    InitializePtr Initialize;
  } FunctionLoadStatus;

  nidevice_grpc::SharedLibrary shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace nirfmxspecan_grpc

#endif  // NIRFMXSPECAN_GRPC_LIBRARY_H
