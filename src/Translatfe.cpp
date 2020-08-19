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
#include <english/german/basics.hpp>
#include <Translatfe.hpp>

int main(int argc, char **argv) {
    // ("Welcome back.")
    std::string source;
    std::cout << "Fegeya Translatfe - " << TRANSLATFE_VERSION << "\nWrite [English to German]: ";
    
    std::getline(std::cin, source);

    std::istringstream stream(source);
    std::string word;
    
    std::cout /*<< "English : " << source*/ << "German : ";
    while (stream >> word) {
        const auto &t = translations.find(word);

        if (t != translations.end()) { // Found
            std::cout << t->second << " ";
        } else { 
            std::cout << word << " ";
    	}
    }

    std::cout << "\n";
    return 0;
}
