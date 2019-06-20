#include <napi.h>

namespace functionexample {
   std::string hello();
   Napi::String HelloWrapped(const Napi::CallbackInfo& infoS);
   Napi::Object Init(Napi::Env env, Napi::Object exports);
}
