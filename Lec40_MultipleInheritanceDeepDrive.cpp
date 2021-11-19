#include <iostream>
using namespace std;

// syntax for multiple inheritence
// class derived : visibility-mode base1, visibility-mode base2
// {
// class body of the class
// };

class Base1
{
protected:
    int base1int;

public:
    Base1()
    {
        cout << "this is the base 1 constructor" << endl;
    }
    void set_base1int(int a)
    {
        base1int = a;
    }

    ~Base1()
    {
        cout << "this is the base 1 destructor" << endl;
    }
};

class Base2
{
protected:
    int base2int;

public:
    Base2()
    {
        cout << "this is the base 2 constructor" << endl;
    }
    void set_base2int(int a)
    {
        base2int = a;
    }

    ~Base2()
    {
        cout << "this is the base 2 destructor" << endl;
    }
};

// note jis order mein inherit krege usi order mein construct krega!!!
class derived : public Base1, public Base2
{
public:
    derived()
    {
        cout << "this is the derived class constructor" << endl;
    }
    void show()
    {
        cout << "the value of base1int is : " << base1int << endl;
        cout << "the value of base2int is : " << base2int << endl;
        cout << "the sum of base1int + base2int : " << base1int + base2int << endl;
    }

    ~derived()
    {
        cout << "this is the derived class destructor" << endl;
    }
};
int main()
{
    cout << "This is again the deep dive in the concept of multiple inheritance in c++ programming" << endl;
    derived harry;
    harry.set_base1int(25);
    harry.set_base2int(5);
    harry.show();
    return 0;
}

// kaun kb construct ho raha hai aur kb destroy ye bhi important hai
// here the derived class will look like something like this :
// 1. base1int----> protected;
// 2. base2int-----> protected ;
// 3. set_base1int()------> public
// 4. set_base2int()-----> public;
// 5. show()-----> public