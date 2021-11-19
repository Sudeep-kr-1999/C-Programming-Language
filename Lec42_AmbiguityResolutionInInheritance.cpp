
// ==================================================================================================================
// ambugity 1

// #include <iostream>
// using namespace std;

// class Base1
// {
// public:
//     Base1()
//     {
//         cout << "this is the Base1 class constructor" << endl;
//     }
//     void greet()
//     {
//         cout << "how are you ??" << endl;
//     }

//     ~Base1()
//     {
//         cout << "this is the Base1 class destructor" << endl;
//     }
// };

// class Base2
// {
// public:
//     Base2()
//     {
//         cout << "this is the Base2 class constructor" << endl;
//     }
//     void greet()
//     {
//         cout << "kaise ho ??" << endl;
//     }
//     ~Base2()
//     {
//         cout << "this is the Base2 class destructor" << endl;
//     }
// };

// class derived : public Base1, public Base2
// {
// private:
//     int a;

// public:
//     derived()
//     {
//         cout << "this is the constructor of derived class" << endl;
//     }

//     // very very important
//     // this means koi bhi greet ko call kre to Base1 ka greet called ho jaaye to isse compiler ko pta padega ki
//     // kis class ke greet function ko use mein lena h
//     void greet()
//     {
//         Base1::greet();
//         // Base2::greet();
//     }
//     ~derived()
//     {
//         cout << "this is the destructor of derived class" << endl;
//     }
// };

// int main()
// {
//     cout << "this is the first example of the ambiguity resolution in inheritance in c++ programming" << endl;

//     // Base1 base1_obj;
//     // Base2 base2_obj;
//     // base1_obj.greet();
//     // base2_obj.greet();

//     derived d1;
//     d1.greet();
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------
// ambiguity 2

#include <iostream>
using namespace std;

class B
{
public:
    B()
    {
        cout << "this is the constructor of the B class" << endl;
    }
    void say()
    {
        cout << "hello world" << endl;
    }

    ~B()
    {
        cout << "this is the Destructor of the B class" << endl;
    }
};

class D : public B
{
public:
    D()
    {
        cout << "this is the constructor of class D" << endl;
    }

    // very very important
    // note:---------------- here derive class upar waale function ko override krke khud ka ek function save kr leti h
    // NOTE:---- agar same naam se apna funciton hai to pehle apna function chalega aur agar nhi h ya nhi likha to parent
    // class ka funciton chalega

    void say()
    {
        cout << "hello world by beautiful people" << endl;
    }

    ~D()
    {
        cout << "this is the destructor of class D" << endl;
    }
};
int main()
{
    cout << "this is the second example for the ambiguity resolution" << endl;
    D d;
    d.say();
    return 0;
}