

// note:---- > There are 2 types of header files:-----------
//            1. System header files : it comes with the compiler
#include <iostream>
//            2. user defined header files : it is written by the programmer

// #include"this.h"---------------> this will produce an error if "this.h" is not present in current directory
// else if "this.h" is present in the current directory all the properties of :this.h" can be used in current file
// note:-------(.h) should be the extension of the file name!
using namespace std;
int main()
{
    int a = 4, b = 5;
    cout << "header files in c++ programming and operators in c++ programming" << endl;
    cout << "following are the types of operators in c++" << endl;
    // Arithematic Operators
    cout << "-------------------------------------------------------------------------" << endl;

    cout << "arithematic operators" << endl;
    cout << "the value of a + b is : " << a + b << endl;
    cout << "the value of a - b is : " << a - b << endl;
    cout << "the value of a * b is : " << a * b << endl;
    cout << "the value of a / b is : " << a / b << endl;
    cout << "the value of a % b is : " << a % b << endl;
    cout << "the value of a++ is : " << a++ << endl;
    cout << "the value of a-- b is : " << a-- << endl;
    cout << "the value of ++a is : " << ++a << endl;
    cout << "the value of --a is : " << --a << endl;
    cout << "-------------------------------------------------------------------------" << endl;

    // Assignment operators
    // used to assign value to the variables
    // ex:--- int a=5,b=5; etc.............!

    // Comparison Operators
    // used to compare the value of the variables
    cout << "comparison operators" << endl;
    cout << "the value of a==b is : " << (a == b) << endl;
    cout << "the value of a!=b is : " << (a != b) << endl;
    cout << "the value of a>=b is : " << (a >= b) << endl;
    cout << "the value of a<=b is : " << (a <= b) << endl;
    cout << "the value of a>b is : " << (a > b) << endl;
    cout << "the value of a<b is : " << (a < b) << endl;

    cout << "-------------------------------------------------------------------------" << endl;
    cout << "Logical operators" << endl;
    // LOGICAL OPERATORS
    cout << "the value of ((a==b)&&(a<b)) with logical \"and\" is : " << ((a == b) && (a < b)) << endl;
    cout << "the value of ((a==b)||(a<b)) with logical \"or\" is :" << ((a == b) || (a < b)) << endl;
    cout << "the value of (!(a==b)) with logical \"not\" is :" << (!(a == b)) << endl;
    // note:-----------> logical not operator is used to reverse the result.....!

    // bitwise operator also contain in c++
    // bitwise and(&)
    // bitwise or(|)
    // complement (~)..etc
    return 0;
}