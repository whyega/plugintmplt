#pragma once

#define PLUGIN_ENTRY_POINT(p)                                                 \
  int __stdcall DllMain(void* handle, unsigned long reason, void* reserved) { \
    switch (reason) {                                                         \
      case 1:                                                                 \
        p::GetInstance().OnLoad(handle);                                      \
        break;                                                                \
      case 0:                                                                 \
        p::GetInstance().OnUnload();                                          \
        break;                                                                \
    }                                                                         \
    return 1;                                                                 \
  }

template <class T>
class AbstractPlugin {
 protected:
  AbstractPlugin() = default;

 public:
  AbstractPlugin(const AbstractPlugin&) = delete;
  AbstractPlugin& operator=(const AbstractPlugin&) = delete;

  static T& GetInstance() {
    static T instance;
    return instance;
  }

  virtual void OnLoad(void* handle) = 0;
  virtual void OnUnload() = 0;
};