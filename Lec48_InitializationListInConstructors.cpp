#include <iostream>
using namespace std;
/*

note:-------- initialization list mein wo pehle initialize hoga jo pehle declare hua hai(vvi)
syntax for initialization list in constructor :
constructor(argument-list):initialization-section(contain initialization list){
    assignment+other code 
}

class Test
{
    int a;
    int b;

    public:

    //note:-- this a(i),b(j) means a ko i assign ho jaaye and b ko j assign ho jaaye (this list is called initialization list)
                which is used to initialize the variable .
    Test(int i, int j) : a(i), b(j)
    {
        //body of constructor 
    }
};

*/

// ------------------------------------------------------------------------------------------------------------

// class Test
// {
//     int a;
//     int b;

// public:
//     Test(int i, int j) : a(i), b(j)
//     {
//         cout << "constructor of Test class Executed" << endl;
//         cout << "value of a is : " << a << endl;
//         cout << "value of b is : " << b << endl;
//     }
// };

// ------------------------------------------------------------------------------------------------------------

// class Test
// {
//     int a;
//     int b;

// public:
//     Test(int i, int j) : a(i), b(i+j)
//     {
//         cout << "constructor of Test class Executed" << endl;
//         cout << "value of a is : " << a << endl;
//         cout << "value of b is : " << b << endl;
//     }
// };

// ------------------------------------------------------------------------------------------------------------

// class Test
// {
//     int a;
//     int b;

// public:
//     Test(int i, int j) : a(i), b(2*j)
//     {
//         cout << "constructor of Test class Executed" << endl;
//         cout << "value of a is : " << a << endl;
//         cout << "value of b is : " << b << endl;
//     }
// };

// ------------------------------------------------------------------------------------------------------------

// class Test
// {
//     int a;
//     int b;

// public:

//     // here a is used to initialize the other variable b since the value of a is available it will work(vvi syntax);
//     Test(int i, int j) : a(i), b(a+j)
//     {
//         cout << "constructor of Test class Executed" << endl;
//         cout << "value of a is : " << a << endl;
//         cout << "value of b is : " << b << endl;
//     }
// };

// ------------------------------------------------------------------------------------------------------------

// very very important logic -----------------------------------------------------------------
// class Test
// {
//     int a;
//     int b;

// public:
//     // note:---------- this will create problem since a will initialize first because in the class a is declared first
//     // note:--------- jo pehle declare hota hai wo pehle initialize hota h
//     Test(int i, int j) : a(i+b), b(j)
//     {
//         cout << "constructor of Test class Executed" << endl;
//         cout << "value of a is : " << a << endl;
//         cout << "value of b is : " << b << endl;
//     }
// };

// ------------------------------------------------------------------------------------------------------------

// note:---------- here we change the order of declaration since b pehle declare hai to is baar upar waala error nhi aayega
class Test
{
    int b;
    int a;

public:
    // note:--------- jo pehle declare hota hai wo pehle initialize hota h
    Test(int i, int j) : a(i + b), b(j)
    {
        cout << "constructor of Test class Executed" << endl;
        cout << "value of a is : " << a << endl;
        cout << "value of b is : " << b << endl;
    }
};

// ------------------------------------------------------------------------------------------------------------
// it will work fine also
// class Test
// {
//     int b;
//     int a;

// public:

//     // here a is used to initialize the other variable b since the value of a is available it will work(vvi syntax);
//     Test(int i, int j) : a(i), b(j)
//     {
//         cout << "constructor of Test class Executed" << endl;
//         cout << "value of a is : " << a << endl;
//         cout << "value of b is : " << b << endl;
//     }
// };
int main()
{
    cout << "Using initialization list in constructors" << endl;
    Test t(4, 6);
    return 0;
}