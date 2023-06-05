/*********************
* Name: Saeid Jalaliani
COSC 2436
Purpose: code and observe the relationship between the OS, command prompt and arguments passed to the main function
**********************/

#include "functions.h"

int string_length(const char *str){
    
    int count = 0;
    
    while (str[count] != '\0'){
        count++;
    }
    return count;
}
