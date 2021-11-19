#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number() { a = 0; }

    Number(int num)
    {
        a = num;
    }

    // it is a copy constructor

    // note:-- if we donot make the copy constructor then it will got give error since compiler by default object ko
    // copy constructor allocate kr deta h (very very important)
    Number(Number &obj)
    {
        cout << "it is a copy constructor call" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "the number for this object is : " << a << endl;
    }
};

int main()
{
    cout << "this is about copy constructor in c++ programming" << endl;
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    // --------------------------------------------------------------------------------------
    // z1 should ressemble like z or x or y
    // z1 mein z ko copy kr lo the below statement means

    // -----------------------------------------------------------------------------------
    // here copy constructor invoked
    // Number z1(z);
    // z1.display();

    // -------------------------------------------------------------------------------------
    // it will not invoke the copy constructor
    // z2=z;

    // --------------------------------------------------------------------------------------
    Number z3 = z;
    z3.display();
    return 0;
    // --------------------------------------------------------------------------------------
}

// copy constructor:-- it is a constructor which make the copy of the existing object .
