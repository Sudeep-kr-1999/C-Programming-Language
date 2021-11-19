#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    // creating a constructor
    Complex();
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};


// it is a default constructor as it takes no parameter 
Complex ::Complex()
{
    cout << "in the constructor" << endl;
    a = 10;
    b = 20;
}

int main()
{
    cout << "Constructors in c++ programming " << endl;
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}

// constructor :
// 1. constructor is a special member function  with the same name as of the class used to initialize object of the class
// 2. it donot have any return type (vvi) even not void (important)
// 3. it is automatically invoked as we declare the 
// 4. it should be declare in the pubic section of the class 
// 5. it can have default arguments 
// 6. we cannot refer to their address 

