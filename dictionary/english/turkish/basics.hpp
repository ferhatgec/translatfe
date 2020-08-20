/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
*/

#ifndef TURKISH_BASICS_HPP
#define TURKISH_BASICS_HPP

#include <cstring>
#include <map>

static std::map<std::string, std::string> en_tr_translations {
     	{"I", "Ben"},
     	{"You", "Sen"},
	{"He", "O"},
	{"She", "O"},
	{"It", "O"},
	{"We", "Biz"},
	{"They", "Onlar"},
	{"week", "hafta"},
	{"year", "yıl"},
	{"today", "bugün"},
	{"calendar", "takvim"},
	{"second", "saniye"},
	{"hour", "saat"},
	{"minute", "dakika"},
	{"Hello", "Merhaba"},
	{"Welcome", "Hoşgeldiniz"},
	{"Well", "İyi"},
	{"back", "tekrar"},
	{"programming", "programlama"},
	{"Programming language", "Programlama dili"},
	{"Really?", "Gerçekten mi?"},
	{"car", "araba"},
	{"good", "iyi"},
	{"why", "Neden"},
	{"Thank you", "Teşekkür ederim"},
	{"Thanks", "Teşekkürler"},
	{"keyboard", "klavye"},
	{"book", "kitap"},
	{"yes", "Evet"},
	{"no", "Hayır"},
	{"translator", "çevirmen"}, /* TODO: Nominativ Possessivpronomen */
  {"developer", "geliştirici"}
};

#endif // TURKISH_BASICS_HPP
