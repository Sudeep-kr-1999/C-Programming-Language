#include <iostream>
using namespace std;
class A
{
    int a;

public:
    A &setData(int a)
    {

        // a=a;
        // note:---- since variable ka naam same hai to compiler confuse ho jaayega ki kaun se "a" se value lena hai
        // aur kaun se "a" mein jaakr value set kr dena hai . here compiler error to nhi dega kyuki sb shi h but value
        // mein garbage value dega since wo confused h

        // isi problem ko dur krne ke liye hum "this" keyword ka use krte hai jo ek pointer to the current object hai
        // isse confusion khtm ho jaata h since hume pta pdta h ki kaun sa object wla  "a" hai aur kaun sa function wla "a"
        // hai !!!!!!
        this->a = a;
        return *this;
    }

    void getData()
    {
        cout << "the value of a is : " << a << endl;
    }
};
int main()
{
    cout << "this is about \"this\" pointer in c++ programming" << endl;
    A a;
    a.setData(4).getData();
    // a.getData();
    return 0;
}

// this keyword:--
// 1.it is a keyword which is the pointer which points to the current object which is created
// 2. this keyword also used to  return the current object fir baad mein hume us object ka pointer mil jaayega aur agr hum
//   kuch aur krna chahe us object ke saath to kr skte h
