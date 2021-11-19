#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base = 1;
    virtual void display()
    {
        cout << "1 displaying base class variable var_base : " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    virtual void display()
    {
        cout << "2 displaying base class variable var_base : " << var_base << endl;
        cout << "2 displaying derived class variable var_derived : " << var_derived << endl;
    }
};
int main()
{
    cout << "this is about virtual funciton in c++ programming" << endl;
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display();

    return 0;
}

// virtual function:---- jab hum function ke peeche virtual keyword lagate hai to virtual funciton bn jaata hai aur dynamic binding
// ko acheive krne mein kaam mein aata h

// it means base class bolega ki agar mere type ka pointer derived class ko point kre to derived class ka
//hi run krna mera run nhi krna!!!!