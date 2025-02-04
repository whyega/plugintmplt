#pragma once

#include "detail/singleton.hpp"

namespace plugintmplt {
#define PLUGIN_ENTRY_POINT(p)                                                 \
  int __stdcall DllMain(void* handle, unsigned long reason, void* reserved) { \
    switch (reason) {                                                         \
      case 1:                                                                 \
        p::GetInstance().OnAttach(handle);                                    \
        break;                                                                \
      case 0:                                                                 \
        p::GetInstance().OnDetach();                                          \
        break;                                                                \
    }                                                                         \
    return 1;                                                                 \
  }

template <class T>
class AbstractPlugin : public detail::Singleton<T> {
 public:
  virtual void OnAttach(void* handle) = 0;
  virtual void OnDetach() = 0;
};
}  // namespace plugintmplt