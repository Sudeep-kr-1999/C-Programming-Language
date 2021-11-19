#include <iostream>
using namespace std;

// syntax
/*

CLASS TEMPLATES WITH MULTIPLE PARAMETERS(ONE,TW0 , TWO OR MORE THAN TWO............................)
template <class T1, class T2>

class nameofClass{
    //body of the class
}; 
*/

template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;

    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << "the data 1 is : " << this->data1 << endl;
        cout << "the data 2 is : " << this->data2 << endl;
    }
};
int main()
{
    cout << "This is about templates with multiple parameters in c++ programming" << endl;
    // myClass<int, char> obj(1, 'c');
    myClass<int, float> obj(1, 1.8);
    obj.display();
    return 0;
}