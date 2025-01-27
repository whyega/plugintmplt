#pragma once

#define PLUGIN_ENTRY_POINT(p)                                                 \
  int __stdcall DllMain(void* handle, unsigned long reason, void* reserved) { \
    switch (reason) {                                                         \
      case 1:                                                                 \
        p::GetInstance().OnLoad();                                            \
        break;                                                                \
      case 0:                                                                 \
        p::GetInstance().OnUnload();                                          \
        break;                                                                \
    }                                                                         \
    return 1;                                                                 \
  }

class IPlugin {
 public:
  virtual void OnLoad(void* handle) = 0;
  virtual void OnUnload() = 0;
};