#include <iostream>
using namespace std;

int main() {
    cout << "This is my first C++ program" << endl;
    return 0;
}

 // notes

// steps of compilation
/*
1. writing source code
2. pre-processing
3. compiling
4. linking
5. loading- assigning memory for the program
*/

/*
pre -porcessing - a process of processing source code according to special instructions 
these directives tell the compiler to do something before actual compilation starts..
*/

/*
anything that starts with # is a preprocessor directive(a tool that prepares your code for the compiler)
*/

// iostream- strands for input and output,    so io-input and output,     stream- flow of data
// library- collection of pre-written code that can be used to simplify tasks
// cout- console output- displaying output on the screen
//cin- console input- taking input from the user
//cerr- console error- displaying error messages
//clog- console log- displaying log messages
// endl- end line- used to insert a new line in the output

// hello world program 
#include <iostream>    // preprocessor directive meaning read me first before compiling
using namespace std;

int main() {
    cout << "Hello World" << endl;
    return 0;
}