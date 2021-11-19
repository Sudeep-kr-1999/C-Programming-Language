#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setDataSum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumber()
    {
        cout << "Your complex number is " << a << " + i" << b << endl;
    }
};
// class Employee
// {
//     int id;
//     int salary;

// public:
//     void setId()
//     {
//         salary = 122;
//         cout << "Enter the id of Employee : ";
//         cin >> id;
//     }

//     void getId()
//     {
//         cout << "The id of this employee is  : " << id << endl;
//     }
// };
int main()
{
    cout << "array of objects and passing objects as functional argument in c++ programming" << endl;
    // Employee Harry, Rohan, Lovish, Shruti;
    // Harry.setId();
    // Harry.getId();

    // Employee fb[4];
    // for (int i = 0; i < 4; i++)
    // {
    //     fb[i].setId();
    //     fb[i].getId();

    // }

    // ------------------------------------------------------------------------------------------
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();
    c2.setData(3, 4);
    c2.printNumber();
    c3.setDataSum(c1, c2);
    c3.printNumber();
    return 0;
}