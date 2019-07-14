//
//  parser.hpp
//  Toy-Compiler
//
//  Created by HanweiZhu on 6/1/19.
//  Copyright © 2019 HanweiZhu. All rights reserved.
//

#ifndef parser_hpp
#define parser_hpp

#include <stdio.h>
#include <string>

using namespace std;

#endif /* parser_hpp */

class ParserDef{
public:
    ParserDef(): type_("lex"){};
    ParserDef(string type_);
private:
    string type_;
};

class Parser{
public:
    Parser(const ParserDef &parser_def);
    virtual void parse() = 0;
};
