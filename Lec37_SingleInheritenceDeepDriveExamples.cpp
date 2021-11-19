// #include <iostream>
// using namespace std;
// class Base
// {
//     int data1; //private and not inheritable
// public:
//     Base()
//     {
//         cout << "this is the base constructor " << endl;
//     }
//     int data2;
//     void setData();
//     int getData1();
//     int getData2();
//     ~Base()
//     {
//         cout << "this is the base destructor " << endl;
//     }
// };

// void Base::setData()
// {
//     data1 = 10;
//     data2 = 20;
// }

// int Base::getData1()
// {
//     return data1;
// }

// int Base::getData2()
// {
//     return data2;
// }

// // class is being derived publically
// class derived : public Base
// {
//     int data3;

// public:
//     derived()
//     {
//         cout << "this is the derived constructor" << endl;
//     }
//     void process();
//     void display();
//     ~derived()
//     {
//         cout << "this is the derived destructor" << endl;
//     }
// };

// void derived::process()
// {
//     data3 = data2 * getData1();
// }

// void derived::display()
// {
//     cout << "value of data 1 is : " << getData1() << endl;
//     cout << "value of data 2 is  : " << data2 << endl;
//     cout << "value of data 3 is : " << data3 << endl;
// }

// int main()
// {
//     cout << "single inheritence deep drive with examples in c++ programming" << endl;
//     derived der;
//     der.setData();
//     der.process();
//     der.display();
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------
// when derived privately from base class

#include <iostream>
using namespace std;
class Base
{
    int data1; //private and not inheritable
public:
    Base()
    {
        cout << "this is the base constructor " << endl;
    }
    int data2;
    void setData();
    int getData1();
    int getData2();
    ~Base()
    {
        cout << "this is the base destructor " << endl;
    }
};

void Base::setData()
{
    data1 = 10;
    data2 = 20;
}

int Base::getData1()
{
    return data1;
}

int Base::getData2()
{
    return data2;
}

// class is being derived publically
class derived : private Base
{
    int data3;

public:
    derived()
    {
        cout << "this is the derived constructor" << endl;
    }
    void process();
    void display();
    ~derived()
    {
        cout << "this is the derived destructor" << endl;
    }
};

void derived::process()
{
    setData();
    data3 = data2 * getData1();
}

void derived::display()
{
    cout << "value of data 1 is : " << getData1() << endl;
    cout << "value of data 2 is  : " << data2 << endl;
    cout << "value of data 3 is : " << data3 << endl;
}

int main()
{
    cout << "single inheritence deep drive with examples in c++ programming" << endl;
    derived der;
    der.process();
    der.display();
    return 0;
}

// note:---------------------

// kaun kb construct ho raha hai aur kb destroy ye bhi important hai
// yha pr base ke public member derived hone ke baad derived class ke private member bn gye to hum class ke baahr se use
// access nhi kr paayege isliye hume use internal function ke through hi call krna padega