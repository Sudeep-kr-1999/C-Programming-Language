#include <iostream>
using namespace std;

int glo = 6; // this is a global variable
void sum()
{
    int a;
    cout << glo << endl;
    // is function ke andar waale "glo" ko pta hi nhi h ki main function mein bhi "glo" variable h ise bs itna pta h ki ek global variable h
    // "glo" naam ka jiski value 6 h to ye 6 print krega...........!!!!!!!!!!!!!
}
int main()
{
    // these are local variable
    int glo = 9;
    glo = 78;
    cout << "this is about variable scope and data types in c++" << endl;
    int a = 4;
    int b = 5;
    float pi = 3.14;
    char c = 'u';
    bool check = true;

    cout << "here the value of a  is " << a << " The value of b is " << b << endl;
    cout << "the value of pi is : " << pi << endl;
    cout << "the value of c is : " << c << endl;
    sum();
    cout << glo << endl;
    cout << check << endl;
    // note:--------------->  bool ki output value (1) hoga if it is true and if it is false it will print (0)...!

    return 0;

    // SCOPE IN C++:-------------------
    // There are generally 2 scopes in c++:----
    // 1. Local Vaiables :----> local variables are declared inside the braces of any function and can be accessed only from there!
    // 2. Global Variables:----> global variables are declared outside any function and can be accessed from anywhere!

    // note:------> global and local variables may have same name in c++.....!!!!!!!!!!!!!
    // note:---------> local variable have precedence over global variable if the name is same for the both...........!!!!!

    // There are basically 3 types of data types in c++ available:------------
    // 1. Built-in data types -----> (int , float, char, double, bool)
    // 2. User defined data types-----------> (struct, union, enum)
    // 3. Derived data types--------------->(arrays, functions and pointers)
}