/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
*/

#ifndef LANGUAGE_HPP
#define LANGUAGE_HPP

#include <iostream>
#include <cstring>

class FLanguage {
public:
  std::string Char_to_Morse(char16_t);
  std::string Morse_to_String(std::string);
  void String_to_Morse(std::string);
  void English_to_German(std::string);
  void English_to_Turkish(std::string);
};

#endif // LANGUAGE_HPP
