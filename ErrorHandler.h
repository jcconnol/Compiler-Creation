/*
 *  C++ Compiler Creation
 * 
 *  Creator: John Connolly
 *  
 *  All rights reserved since this probably
 *  won't be the best compiler out there.
 */

#ifndef ERRORHANDLER_H
#define ERRORHANDLER_H

#include <string>

using std::string;

class ErrorHandler {
    
public:
    ErrorHandler();
    static void errorMessages(int);
    static void display();
    
    
private:
    string errorMessage;
};

#endif /* ERRORHANDLER_H */

