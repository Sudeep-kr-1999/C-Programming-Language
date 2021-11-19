#include <iostream>
using namespace std;

class Base
{
    // vvi
    // protected is a variable just like private jo baahr se to access nhi ho skta but agr chahe to derived ko inherit zaroor ho skta h

protected:
    int a;

private:
    int b;
};

class Derived : protected Base
{
};

int main()
{
    cout << "this is about protected access modifier in inheritance in c++ programming" << endl;
    Base b;
    Derived d;

    // will not work because a is protected in both base as well as derived class
    // cout<<b.a;
    return 0;
}

// ====================================================================================================
//   base calass ke member type  (down)
//   type of inheritance by derived class(row)
//                           public              private             protected
// 1.priavate members          not inherited       not inherited       not inherited
// 2. public  members          public              private             protected
// 3. protected  members       protected           private             protected
