
#include "Lexicon.h"

Lexicon::Lexicon(string fileName){
    this->fileName = fileName;
}

void Lexicon::tokenize(string input){
    int beg = 0;
    int i;
    string delim = " /%+)*-(=";
    string space = " ";
    for(i = 0; i < input.size(); i++){
        //finds delimiter
        string tok_part;
        if(delim.find(input[i]) != string::npos){
            //adds substring before delimiter to vector
            tok_part = input.substr(beg, i-beg);
            tok_part.erase(remove(tok_part.begin(), tok_part.end(), ' '), tok_part.end());
            if( space.find(tok_part) == string::npos){
                tokenized.push_back(Token(tok_part));
            }
            beg = i;
            //adds delimiter to vector then goes onto next
            tok_part = input.substr(beg, 1);
            tok_part.erase(remove(tok_part.begin(), tok_part.end(), ' '), tok_part.end());
            if(space.find(tok_part) == string::npos){
                this->tokenized.push_back(Token(tok_part));
                beg++;
            }
        }
    }
    
    //end error checking for if doesn't end in delimiter
    if(input.find_last_of(delim)+1 != input.size()){
        int last_pos = input.find_last_of(delim);
        string tok_part = input.substr(last_pos+1, input.size());
        tok_part.erase(remove(tok_part.begin(), tok_part.end(), ' '), tok_part.end());
        if(space.find(tok_part) == string::npos){
            tokenized.push_back(Token(tok_part));
        }
    }
}

int Lexicon::read(){
    //reads file and tokenizes
    return 0;
}

vector<Token> Lexicon::getTokenized(){
    return this->tokenized;
}

void Lexicon::execute(){
    //runs everything
    if(!read()){
        errorCheck();
    }
    else{
        //add to symbol checking thing
    }
}

void Lexicon::errorCheck(){
    //send to error class to output and exit
    
}