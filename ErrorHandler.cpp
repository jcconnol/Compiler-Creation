/*
 *  C++ Compiler Creation
 * 
 *  Creator: John Connolly
 *  
 *  All rights reserved since this probably
 *  won't be the best compiler out there.
 */

#include "ErrorHandler.h"

ErrorHandler::ErrorHandler(){
    errorMethod = new ErrorMethod;
}

void ErrorHandler::errorMessages(int lineNumber, Token tok, int error){
    if(error == 0){
        errorMessage = errorMethod.NO_ERROR;
    }
}

void ErrorHandler::display(){
    
}