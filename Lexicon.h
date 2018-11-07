/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lexicon.h
 * Author: John Connolly
 *
 * Created on November 7, 2018, 11:50 AM
 */

#ifndef LEXICON_H
#define LEXICON_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include "Token.h"

using std::string;
using std::vector;

class Lexicon {
public:
    Lexicon(string fileName);
    void tokenize(string part);
    int read();
    vector<Token> getTokenized();
    void execute();
    void errorCheck();
    
private:
    string fileName;
    vector<Token> tokenized;
};

#endif /* LEXICON_H */

