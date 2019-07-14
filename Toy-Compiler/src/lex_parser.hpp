//
//  lex_parser.hpp
//  Toy-Compiler
//
//  Created by HanweiZhu on 2018/6/5.
//  Copyright © 2018年 HanweiZhu. All rights reserved.
//

#ifndef lex_parser_hpp
#define lex_parser_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>

#include "parser.hpp"

#endif /* lex_parser_hpp */


// keywords in C
static std::string keywords[50] = {
    "short", "int", "long", "float", "double", "char",
    "struct", "union", "enum", "typedef", "const", "unsigned",
    "signed", "extern", "static", "void", "if", "else", "switch",
    "case", "for", "do", "while", "goto", "continue", "break",
    "default", "sizeof", "return", "true", "false" };

class LexParser: public Parser{
    
public:
    LexParser();
    static std::vector<std::string> split(std::string s, char delim);
    static void trim(std::string& s);
    static bool pre_process(std::string& s);
    static void parse(std::string& str);
};
