/* 
 * File:   Token.h
 * Author: John Connolly
 *
 * Created on November 7, 2018, 4:10 PM
 */

#ifndef TOKEN_H
#define TOKEN_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using std::string;

//declaration of enums
enum Token_type {IDENTIFIER, INTEGER, OPERATORS, EQUAL, OPENBRACE, CLOSEBRACE, INVALID};

class Token{
    public:
        Token();
        Token(string);
        void set(string);
        int value() const;
        void display() const;
        Token_type get_type() const;
        string get_token() const;
        int get_priority() const;
        
    private:
        Token_type type;
        string token;
        int priority;
};

#endif /* TOKEN_H */

