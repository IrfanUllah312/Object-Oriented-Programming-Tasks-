#include<iostream>
using namespace std;

#define DEBUG
int main() 
{
    #ifdef DEBUG
        cout << "Debugging is enabled." << endl;
    #else
        cout << "Debugging is disabled." << endl;
    #endif
    return 0;
}

// 2. Conditional directives (like #ifdef) with the appropriate code, 
//    modifying the source code before passing to the compiler.