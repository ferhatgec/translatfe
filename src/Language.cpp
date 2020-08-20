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

/*
 From EasyMorse
 https://github.com/ferhatgec/easymorse
*/
std::string
FLanguage::Char_to_Morse(char16_t ch) {
  switch(ch) {
      case 'a': case 'A':
        return ".-"; break;
      case 'b': case 'B':
        return "-..."; break;
      case 'c': case 'C':
        return "-.-."; break;
      case 'd': case 'D':
        return "-.."; break;
      case 'e': case 'E':
        return "."; break;
      case 'f': case 'F':
        return "..-."; break;
      case 'g': case 'G':
        return "--."; break;
      case 'h': case 'H':
        return "...."; break;
      case 'i': case 'I':
        return ".."; break;
      case 'j': case 'J':
        return ".---"; break;
      case 'k': case 'K':
        return "-.-"; break;
      case 'l': case 'L':
        return ".-.."; break;
      case 'm': case 'M':
        return "--"; break;
      case 'n': case 'N':
        return "-."; break;
      case 'o': case 'O':
        return "---"; break;
      case 'p': case 'P':
        return ".--."; break;
      case 'q': case 'Q':
        return "--.-"; break;
      case 'r': case 'R':
        return ".-."; break;
      case 's': case 'S':
        return "..."; break;
      case 't': case 'T':
        return "-"; break;
      case 'u': case 'U':
        return "..-"; break;
      case 'v': case 'V':
        return "...-"; break;
      case 'w': case 'W':
        return ".--"; break;
      case 'x': case 'X':
        return "-..-"; break;
      case 'y': case 'Y':
        return "-.--"; break;
      case 'z': case 'Z':
        return "--.."; break;
      case L'ą': case L'Ą':
        return ".-.-"; break;
      case L'ć': case L'Ć':
        return "-.-.."; break;
      case L'ę': case L'Ę':
        return "..-.."; break;
      case L'ł': case L'Ł':
        return ".-..-"; break;
      case L'ń': case L'Ń':
        return "--.--"; break;
      case L'ó': case L'Ó':
        return "---."; break;
      case L'ś': case L'Ś':
        return "...-..."; break;
      case L'ż': case L'Ż':
        return "--..-."; break;
      case L'ź': case L'Ź':
        return "--..-"; break;
      default:
        return " "; break;
    }
}

/*
 From EasyMorse
 https://github.com/ferhatgec/easymorse
*/
std::string
FLanguage::Morse_to_String(std::string morse) {
  if(morse == ".-") {return "a";}
  else if(morse == "-...") {return "b";}
  else if(morse == "-.-.") {return "c";}
  else if(morse == "-..") {return "d";}
  else if(morse == ".") {return "e";}
  else if(morse == "..-.") {return "f";}
  else if(morse == "--.") {return "g";}
  else if(morse == "....") {return "h";}
  else if(morse == "..") {return "i";}
  else if(morse == ".---") {return "j";}
  else if(morse == "-.-") {return "k";}
  else if(morse == ".-..") {return "l";}
  else if(morse == "--") {return "m";}
  else if(morse == "-.") {return "n";}
  else if(morse == "---") {return "o";}
  else if(morse == ".--.") {return "p";}
  else if(morse == "--.-") {return "q";}
  else if(morse == ".-.") {return "r";}
  else if(morse == "...") {return "s";}
  else if(morse == "-") {return "t";}
  else if(morse == "..-") {return "u";}
  else if(morse == "...-") {return "v";}
  else if(morse == ".--") {return "w";}
  else if(morse == "-..-") {return "x";}
  else if(morse == "-.--") {return "y";}
  else if(morse == "--..") {return "z";}
  else if(morse == ".-.-") {return "ą";}
  else if(morse == "-.-..") {return "ć";}
  else if(morse == "..-..") {return "ę";}
  else if(morse == ".-..-") {return "ł";}
  else if(morse == "--.--") {return "ń";}
  else if(morse == "---.") {return "ó";}
  else if(morse == "...-...") {return "ś";}
  else if(morse == "--..-.") {return "ż";}
  else if(morse == "--..-") {return "ź";}
  else {return " ";}
}

/*
 From EasyMorse
 https://github.com/ferhatgec/easymorse
*/
void
FLanguage::String_to_Morse(std::string str) {
  char key;
  bool loop = true;
  std::string output = "";
  while(loop) {
      bool toMorse=true;
      int node = 0;
      std::string sub;
      if(str.length() == 0) {
        return;
      } else {
      if(str[1]=='.' || str[1]=='-') {
          toMorse=false;
      }
      else {
          toMorse=true;
      }
      if(toMorse) {
          for(int i=0;i<str.length();i++) {
              if(i!=0) {
                  output+=" ";
              }
              output = output + Char_to_Morse(str[i]);
          }
      }
      else {
          for(int i = 0;i<=str.length();i++) {
              if(str[i]==' ') {
                  sub = str.substr(node,i-node);
                  output += Morse_to_String(sub);
                  node = i+1;
              }
              if(i==str.length()-1) {
                  sub = str.substr(node,i+1-node);
                  output += Morse_to_String(sub);
                  node = i+1;
              }
          }
      }
    }
    std::cout << "Morse: " << output;
    return;
  }
}
