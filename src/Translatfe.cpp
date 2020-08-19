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

void Translate(std::string source) {
    std::string word;
    std::istringstream stream(source);
    std::cout /*<< "English : " << source*/ << "German : ";
    while (stream >> word) {
        const auto &t = translations.find(word);

        if (t != translations.end()) // Found
            std::cout << t->second << " ";
        else
            std::cout << word << " ";
    }
}

int main(int argc, char **argv) {
    std::string copy_arg, reg;
   
    if(argc > 1) {
        for(int i = 2; i < argc; i++) {
	    std::string arg(argv[i]);
	    reg.append(argv[i]);
	    reg.append(" ");
	    copy_arg = argv[1];
	}
	
    } else {
        // HelpFunction()	
    }

    if(copy_arg.substr(0, 2) == "--") {
	   if(copy_arg == "--etog") // English to German
		Translate(reg);
	   /*else if(reg == "--h" || reg == "--help")
		// HelpFunction()
	   else if(reg == "--v" || reg == "--version")
		// VersionFunction()
	   else
	        // HelpFunction()*/
    }

    std::cout << "\n";
    return 0;
}
