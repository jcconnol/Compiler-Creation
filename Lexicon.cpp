
#include "Lexicon.h"

Lexicon::Lexicon(){
    this->fileName = "";
    errorHandler = new ErrorHandler();
}

Lexicon::Lexicon(string fileName){
    this->fileName = fileName;
    errorHandler = new ErrorHandler();
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
            tok_part.std::string::erase(remove(tok_part.begin(), tok_part.end(), ' '), tok_part.end());
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
        tok_part.erase(std::remove(tok_part.begin(), tok_part.end(), ' '), tok_part.end());
        if(space.std::find(tok_part) == string::npos){
            tokenized.push_back(Token(tok_part));
        }
    }
}

bool Lexicon::read(){
    //reads file and tokenizes
    ifstream file(fileName);
    if(file.is_open()){
        
    }
    else{
        return false;
    }
}

vector<Token> Lexicon::getTokenized(){
    return this->tokenized;
}

void Lexicon::execute(){
    //runs everything
    if(read()){
        //add to symbol checking thing
        
    }
    else{
        errorCheck(0, new Token(), 1);
    }
}

void Lexicon::errorCheck(int lineNum, Token tok, int error){
    //send to error class to output and exit
    errorHandler.errorMessages()errorMessages(lineNum, tok, error);
}