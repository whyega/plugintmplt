add_library(simpleplugin SHARED 
    src/main.cpp
    src/plugin.cpp
)
target_link_libraries(simpleplugin PRIVATE plugintmplt)