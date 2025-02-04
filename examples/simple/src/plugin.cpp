#include "plugin.hpp"

#include <iostream>

void Plugin::OnLoad(void* handle) {
  std::cout << "Hello, world!" << std::endl;
  ;
}

void Plugin::OnUnload() {}