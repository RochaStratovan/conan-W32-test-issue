#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define SIMPLE_EXPORT __declspec(dllexport)
#else
  #define SIMPLE_EXPORT
#endif

SIMPLE_EXPORT void simple();
SIMPLE_EXPORT void simple_print_vector(const std::vector<std::string> &strings);
