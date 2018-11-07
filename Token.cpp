/* 
 * File:   Token.cpp
 * Author: John Connolly
 *
 * Created on September 20, 2017, 3:24 PM
 */

#include "Token.h"

Token::Token(){
    //default sets type and prioirty
    type = INVALID;
    priority = -1;
}

Token::Token(string tok){
    set(tok);
}

void Token::set(string tok){
    priority = -1;
    token = tok;
    
    if(token == "="){
        type = EQUAL;
    }
    else if(token == "("){
        type = OPENBRACE;
    }
    else if(token == ")"){
        type = CLOSEBRACE;
    }
    //checks if first character is letter
    else if(isalpha(token[0])){
        //goes through string and checks if everything else is either digit or letter
        for(int i = 0; i < token.size(); i++){
            if(!isalpha(token[i]) && !isdigit(token[i])){
                type = INVALID;
                break;
            }
            type = IDENTIFIER;
        }
        
    }
    //checks if interger starts with a 0
    else if (token[0] == '0'){
        type = INVALID;
    }
    //if everything is an integer then type is integer
    else if(token.find_first_not_of("0123456789") == string::npos){
        type = INTEGER;
    }
    //checks operators
    else if(token == "+", "-", "*", "/", "%"){
        type = OPERATORS;
    }
    else{
        type = INVALID;
    }
}

int Token::value() const{
    if(type == IDENTIFIER || type == INVALID){
        return -1;
    }
    if(type == INTEGER){
        //returns the integer value of string
        return atoi(token.c_str());
    }
    
    return -1;
}

void Token::display() const{
    //sets enum numbers to actual words
    string str_typ = "invalid";
    if(type == 0)
        str_typ = "identifier";
    if(type == 1)
        str_typ = "integer";
    if(type == 2)
        str_typ = "operators";
    if(type == 3)
        str_typ = "equals";
    if(type == 4)
        str_typ = "openbrace";
    if(type == 5)
        str_typ = "closebrace";
    if(type == 6)
        str_typ = "invalid";
    
    //outputs
    cout << "type = " << str_typ << endl
         << "token = " << token <<endl
         << "priority = " << priority << endl;
}

Token_type Token::get_type() const{
    return type;
}

string Token::get_token() const{
    return token;
}

int Token::get_priority() const{
    return priority;
}