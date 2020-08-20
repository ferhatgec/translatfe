/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
*/

#ifndef GERMAN_BASICS_HPP
#define GERMAN_BASICS_HPP

#include <cstring>
#include <map>

static std::map<std::string, std::string> en_ger_translations {
     	{"I", "Ich"},
     	{"You", "Du"},
	{"He", "Er"},
	{"She", "Sie"},
	{"It", "Es"},
	{"We", "Wir"},
	/* Ihr */
	{"They", "sie"},
	{"week", "Woche [die]"},
	{"year", "Jahr [das]"},
	{"today", "heute"},
	{"calendar", "Kalender [der]"},
	{"second", "Sekunde [die]"},
	{"hour", "Stunde [die]"},
	{"minute", "Minute [die]"},
	{"Hello", "Hallo"},
	{"Welcome", "Willkommen"},
	{"Well", "Na ja"},
	{"back", "zurück"},
	{"programming", "Programmierung [die]"},
	{"Programming language", "Programmiersprache"},
	{"Really?", "Wirklich?"},
	{"car", "Auto [das]"},
	{"good", "Gut"},
	{"why", "Warum"},
	{"Thank you", "Danke"},
	{"Thanks", "Vielen Dank"},
	{"keyboard", "Tastatur [die]"},
	{"book", "Buch [das]"},
	{"yes", "Ja"},
	{"no", "Nein"},
	{"translator", "übersetzer"} /* TODO: Nominativ Possessivpronomen */
};

#endif // GERMAN_BASICS_HPP
