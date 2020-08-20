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
#include <memory>

// Languages
#include <english/german/basics.hpp>
#include <english/turkish/basics.hpp>

#include <Translatfe.hpp>
#include <Language.hpp>


void Translate(std::string source, int lang) {
    std::unique_ptr<FLanguage> language(new FLanguage);
    if(lang == 1) language->English_to_German(source); /* English to German */
    else if(lang == 2) language->English_to_Turkish(source); /* English to Turkish */
    else if(lang == 3) language->String_to_Morse(source); /* String to Morse */
    else if(lang == 4) language->String_to_Morse(source); /* Morse to String */
    else std::cout << "Language not defined.\n";
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
		Translate(reg, 1);
     else if(copy_arg == "--etot")
    Translate(reg, 2);
     else if(copy_arg == "--stom")
    Translate(reg, 3);
     else if(copy_arg == "--mtos")
    Translate(reg, 4);
     else
    std::cout << "Language not defined!";
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
