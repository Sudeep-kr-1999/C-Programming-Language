#include <iostream>
using namespace std;

/*
Case 1:
class B: public A{
    Order of execution of constructor is first A() then B()
 
};


Case 2:
class A: public B, public C{
    Order of execution of constructor is First B() Then C() Then A()
};


Case 3:
class A: public B , virtual public C{
    order of execution of constructor C() Then B() Then A()
    Since virtual have more preference than non virtual 
};
*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        cout << "base1 class constructor called " << endl;
        data1 = i;
    }
    void printDataBase1()
    {
        cout << "the value of data1 is : " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        cout << "base2 class constructor called " << endl;
        data2 = i;
    }
    void printDataBase2()
    {
        cout << "the value of data2 is : " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    // it is the way to call the constructor of the base class explictly if multiplie base classes are there use comma
    // like below just like super() in python and java

    // very important note
    // note:------ below line mein order change krne se constructor ke execution order mein koi change nhi hoga !!
    // since humne upar change nhi kiya h
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called " << endl;
    }

    void printDataDerived()
    {
        cout << "the value of derived1 is  : " << derived1 << endl;
        cout << "the value of derived2 is  : " << derived2 << endl;
    }
};
int main()
{
    cout << "this is about constructors in derived class in c++ programming" << endl;
    Derived harry(1, 2, 3, 4);
    harry.printDataBase1();
    harry.printDataBase2();
    harry.printDataDerived();
    return 0;
}