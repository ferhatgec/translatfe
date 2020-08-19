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

int main(int argc, char **argv) {
    std::string source("Welcome back.");
    std::istringstream stream(source);
    std::string word;
    
    std::cout << "Fegeya Translatfe\nEnglish : " << source << "\nGerman : ";
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
