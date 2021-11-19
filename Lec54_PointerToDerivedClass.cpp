#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "displaying base class variable var_base : " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "displaying base class variable var_base : " << var_base << endl;
        cout << "displaying derived class variable var_derived : " << var_derived << endl;
    }
};

int main()
{

    cout << "this is about pointer to derived class in c++ programming" << endl;
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    // base class ka pointer derived class ke object se point ho gya

    // note:--------------------------
    // base class ka pointer derived class ko point kr skta hai but jb hum koi bhi function call krege to base class ka hi
    // function call hoga derive class ka nhi . yha jis type ka pointer hai uske saath binding hoti hai jisse hum late
    // binding bolte h
    base_class_pointer = &obj_derived;
    base_class_pointer->var_base = 34;
    base_class_pointer->display();

    // we cannot do this since var_derived is not in base class and will throw an error
    // base_class_pointer->var_derived;

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9448;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();


    return 0;
}