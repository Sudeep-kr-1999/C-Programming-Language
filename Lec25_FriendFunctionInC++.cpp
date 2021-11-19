#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }

    // this is a friend function of the class
    // note:----- it is not the member function of the class which we can use by class object(vvi)
    friend complex sumComlex(complex o1, complex o2);
};

complex sumComlex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber(o1.a + o2.a, o1.b + o2.b);
    return o3;
}
int main()
{
    cout << "this is about friend function in c++ programming " << endl;
    complex c1, c2;
    c1.setNumber(1, 4);
    c2.setNumber(5, 8);
    c1.printNumber();
    c2.printNumber();
    complex sum = sumComlex(c1, c2);
    sum.printNumber();

    return 0;
}

// properties of friend function -------------------------------------------------------------------------
// 1. not in the scope of the class
// 2. since it is not in the scope of the class it cannot be called from the object of the class
// c1.sumComplex()===> invalid
// 3. can be invoked without the help of any object
// 4.usually contains the objects as arguments
// 5. can be declared inside the public or private section of the class
// 6. it cannot access the members directly by their name and need object_name .member_name to access any member
