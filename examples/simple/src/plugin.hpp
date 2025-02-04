#pragma once

#include "plugintmplt/plugintmplt.hpp"

class Plugin : public plugintmplt::AbstractPlugin<Plugin> {
 public:
  void OnLoad(void* handle) override;
  void OnUnload() override;
};