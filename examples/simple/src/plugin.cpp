#include "plugin.hpp"

#include <iostream>

void Plugin::OnAttach(void* handle) {
  std::cout << "Hello, world!" << std::endl;
  ;
}

void Plugin::OnDetach() {}