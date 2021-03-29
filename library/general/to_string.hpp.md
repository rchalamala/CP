---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: library/general/output.hpp
    title: library/general/output.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verification/data_structures/segment_tree_add_sum.test.cpp
    title: verification/data_structures/segment_tree_add_sum.test.cpp
  - icon: ':heavy_check_mark:'
    path: verification/graph/heavy_light_decomposition_path.test.cpp
    title: verification/graph/heavy_light_decomposition_path.test.cpp
  - icon: ':heavy_check_mark:'
    path: verification/graph/heavy_light_decomposition_subtree.test.cpp
    title: verification/graph/heavy_light_decomposition_subtree.test.cpp
  - icon: ':heavy_check_mark:'
    path: verification/numerical/factors/optimized_rho_factorization.test.cpp
    title: verification/numerical/factors/optimized_rho_factorization.test.cpp
  - icon: ':heavy_check_mark:'
    path: verification/numerical/factors/pollards_rho_factorization.test.cpp
    title: verification/numerical/factors/pollards_rho_factorization.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"library/general/to_string.hpp\"\n\n\n\n#include <bitset>\n\
    #include <complex>\n#include <string>\n#include <utility>\n#include <vector>\n\
    \nnamespace std\n{\n\tinline std::string to_string(const bool& element);\n\n\t\
    inline std::string to_string(const char& element);\n\n\tinline std::string to_string(const\
    \ char* element);\n\n\tinline std::string to_string(const std::string& element);\n\
    \n\ttemplate<typename T> std::string to_string(const T& elements);\n\n\ttemplate<std::size_t\
    \ Size> std::string to_string(const std::bitset<Size>& elements);\n\n\ttemplate<typename\
    \ T> std::string to_string(const std::complex<T>& element);\n\n\ttemplate<typename\
    \ T1, typename T2> std::string to_string(std::pair<T1, T2> element);\n}  // namespace\
    \ std\n\ninline std::string std::to_string(const bool& element)\n{\n\treturn std::string{static_cast<char>('0'\
    \ + element)};\n}\n\ninline std::string std::to_string(const char& element)\n\
    {\n\treturn std::string(1, element);\n}\n\ninline std::string std::to_string(const\
    \ char* element)\n{\n\treturn std::string(element);\n}\n\ninline std::string std::to_string(const\
    \ std::string& element)\n{\n\treturn element;\n}\n\ntemplate<typename T> std::string\
    \ std::to_string(const T& elements)\n{\n\tstd::string convert;\n\tbool first =\
    \ true;\n\tfor(const auto& element : elements)\n\t{\n\t\tif(!first)\n\t\t{ convert\
    \ += \" \"; }\n\t\tfirst = false;\n\t\tconvert += std::to_string(element);\n\t\
    }\n\treturn convert;\n}\n\ntemplate<std::size_t Size> std::string std::to_string(const\
    \ std::bitset<Size>& elements)\n{\n\treturn elements.to_string();\n}\n\ntemplate<typename\
    \ T> std::string std::to_string(const std::complex<T>& element)\n{\n\tstd::stringstream\
    \ convert;\n\tconvert << element;\n\treturn convert.str();\n}\n\ntemplate<typename\
    \ T1, typename T2> std::string std::to_string(std::pair<T1, T2> element)\n{\n\t\
    return std::to_string(element.ff) + \" \" + std::to_string(element.ss);\n}\n\n\
    \n"
  code: "#ifndef TO_STRING_HPP\n#define TO_STRING_HPP\n\n#include <bitset>\n#include\
    \ <complex>\n#include <string>\n#include <utility>\n#include <vector>\n\nnamespace\
    \ std\n{\n\tinline std::string to_string(const bool& element);\n\n\tinline std::string\
    \ to_string(const char& element);\n\n\tinline std::string to_string(const char*\
    \ element);\n\n\tinline std::string to_string(const std::string& element);\n\n\
    \ttemplate<typename T> std::string to_string(const T& elements);\n\n\ttemplate<std::size_t\
    \ Size> std::string to_string(const std::bitset<Size>& elements);\n\n\ttemplate<typename\
    \ T> std::string to_string(const std::complex<T>& element);\n\n\ttemplate<typename\
    \ T1, typename T2> std::string to_string(std::pair<T1, T2> element);\n}  // namespace\
    \ std\n\ninline std::string std::to_string(const bool& element)\n{\n\treturn std::string{static_cast<char>('0'\
    \ + element)};\n}\n\ninline std::string std::to_string(const char& element)\n\
    {\n\treturn std::string(1, element);\n}\n\ninline std::string std::to_string(const\
    \ char* element)\n{\n\treturn std::string(element);\n}\n\ninline std::string std::to_string(const\
    \ std::string& element)\n{\n\treturn element;\n}\n\ntemplate<typename T> std::string\
    \ std::to_string(const T& elements)\n{\n\tstd::string convert;\n\tbool first =\
    \ true;\n\tfor(const auto& element : elements)\n\t{\n\t\tif(!first)\n\t\t{ convert\
    \ += \" \"; }\n\t\tfirst = false;\n\t\tconvert += std::to_string(element);\n\t\
    }\n\treturn convert;\n}\n\ntemplate<std::size_t Size> std::string std::to_string(const\
    \ std::bitset<Size>& elements)\n{\n\treturn elements.to_string();\n}\n\ntemplate<typename\
    \ T> std::string std::to_string(const std::complex<T>& element)\n{\n\tstd::stringstream\
    \ convert;\n\tconvert << element;\n\treturn convert.str();\n}\n\ntemplate<typename\
    \ T1, typename T2> std::string std::to_string(std::pair<T1, T2> element)\n{\n\t\
    return std::to_string(element.ff) + \" \" + std::to_string(element.ss);\n}\n\n\
    #endif"
  dependsOn: []
  isVerificationFile: false
  path: library/general/to_string.hpp
  requiredBy:
  - library/general/output.hpp
  timestamp: '2021-03-28 23:42:17-06:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verification/data_structures/segment_tree_add_sum.test.cpp
  - verification/graph/heavy_light_decomposition_path.test.cpp
  - verification/graph/heavy_light_decomposition_subtree.test.cpp
  - verification/numerical/factors/pollards_rho_factorization.test.cpp
  - verification/numerical/factors/optimized_rho_factorization.test.cpp
documentation_of: library/general/to_string.hpp
layout: document
redirect_from:
- /library/library/general/to_string.hpp
- /library/library/general/to_string.hpp.html
title: library/general/to_string.hpp
---