#include <iostream>
using namespace std;

// float funcAverage(int a, int b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }

// note:------- agar hum return type dekr return nhi krte to by default "nan" return krta h

// it is a function template
template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    cout << "function template and function template with parameters" << endl;

    // note:--------- function template mein hum angular bracket mein datatype de
    //                 bhi skte h aur nhi bhi skte h (very very important)!
    // float a;
    // a = funcAverage<int, float>(5, 2.2);
    // cout << "the average of the number is  : ";
    // cout << a << endl;

    int x = 5;
    int y = 7;
    swapp<int>(x, y);
    cout << x << endl;
    cout << y << endl;
    return 0;
}