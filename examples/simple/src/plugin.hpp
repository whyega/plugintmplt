#pragma once

#include "plugintmplt/plugintmplt.hpp"

class Plugin : public plugintmplt::AbstractPlugin<Plugin> {
 public:
  void OnAttach(void* handle) override;
  void OnDetach() override;
};