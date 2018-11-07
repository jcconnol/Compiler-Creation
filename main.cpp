/* 
 * File:   main.cpp
 * Author: John Connolly
 *
 * Created on November 5, 2018, 9:16 PM
 */

#include <cstdlib>
#include "Lexicon.h"

using std:string;

int main() {
    
    string filename = "";
    
    //Reads and breaks up the file into tokens
    Lexicon lex = Lexicon(filename);
    
    lex.execute();
    
    return 0;
}

