// #include <iostream>
// using namespace std;
// class Y;
// class X
// {
//     int data;

// public:
//     void setValue(int value)
//     {
//         data = value;
//     }
//     friend void add(X ,Y);
// };

// class Y
// {
//     int num;

// public:
//     void setValue(int value)
//     {
//         num = value;
//     }
//     friend void add(X ,Y);
// };

// void add(X o1, Y o2)
// {
//     cout << "summing data of X and Y gives me : " << o1.data + o2.num << endl;
// }
// int main()
// {
//     cout << "this is more about friend function in c++ programming language" << endl;
//     X a1;
//     Y b1;
//     a1.setValue(3);
//     b1.setValue(5);
//     add(a1,b1);
//     return 0;
// }

// // NOTE:--- a function can be a friend to multiple classes

// -----------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;
class c2;
class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        val1 = a;
    }
    void display()
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        val2 = a;
    }
    void display()
    {
        cout << val2 << endl;
    }
};

void exchange(c1 & x, c2 & y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
int main()
{
    cout << "this is the second example in this friendfunction logic" << endl;
    c1 oc1;
    c2 oc2;
    oc1.indata(34);
    oc2.indata(67);
    exchange(oc1, oc2);
    cout << "the value of c1 after exchanging becomes : ";
    oc1.display();
    cout << "the value of c2 after exchanging becomes : ";
    oc2.display();
    return 0;
}
