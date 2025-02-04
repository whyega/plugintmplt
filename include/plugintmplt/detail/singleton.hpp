#pragma once

namespace plugintmplt {
namespace detail {
template <class T>
class Singleton {
 protected:
  Singleton() = default;
  Singleton(const Singleton&) = delete;
  Singleton(Singleton&&) = delete;
  Singleton& operator=(const Singleton&) = delete;
  Singleton& operator=(Singleton&&) = delete;

 public:
  static T& GetInstance() {
    static T instance;
    return instance;
  }
};
}  // namespace detail
}  // namespace plugintmplt