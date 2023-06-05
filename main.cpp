/*********************
* Name: Saeid Jalaliani
COSC 2436
Purpose: code and observe the relationship between the OS, command prompt and arguments passed to the main function
**********************/

#include "main.h"

int main(int argc, char** argv) {
    cout << "My Command line analyzer..." << endl;
    cout << "The number of command line parameters are: " << argc << endl;
    cout << "The length of the name of the program is: " << string_length(*argv) << endl;
    
        
    for(int i=1; i < argc; i++){
        cout << "The length of the parameter " << i << " is " << string_length(argv[i]) << endl;
    }
        
    return 0;
}
