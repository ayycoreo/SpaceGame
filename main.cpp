
#include <iostream>
#include "CPPNotes.h" // Assuming CPPNotes.h contains the declaration of Func()

// #include "CPPNotes.cpp" is acceptable, but not recommended due to the potential for multple/redundant definitions.
// It is better to include the header file CPPNotes.h which contains the function declaration. 




//Here is the main C++ code that will need to be compiled and run to see all the changes in action:


int main (void) {
    std::cout << basicFunc(); 
    std::cout << __cplusplus << std::endl;
    return 0;
}