/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
*/

#include <iostream>
#include <string>
#include <sstream>
#include <map>

// Languages
#include <english/german/basics.hpp>
#include <english/turkish/basics.hpp>

#include <Translatfe.hpp>
#include <Language.hpp>

void
FLanguage::English_to_German(std::string en) {
  std::string word;
  std::istringstream stream(en);
  std::cout /*<< "English : " << source*/ << "German : ";
  while (stream >> word) {
      const auto &t = en_ger_translations.find(word);

      if (t != en_ger_translations.end()) // Found
          std::cout << t->second << " ";
      else
          std::cout << word << " ";
  }
}

void
FLanguage::English_to_Turkish(std::string en) {
  std::string word;
  std::istringstream stream(en);
  std::cout /*<< "English : " << source*/ << "Turkish : ";
  while (stream >> word) {
      const auto &t = en_tr_translations.find(word);

      if (t != en_tr_translations.end()) // Found
          std::cout << t->second << " ";
      else
          std::cout << word << " ";
  }
}
