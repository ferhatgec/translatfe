#!/bin/sh

g++ -I./dictionary/ -I./include/ ./src/Language.cpp ./src/Translatfe.cpp  -o tlatfe && ./tlatfe
