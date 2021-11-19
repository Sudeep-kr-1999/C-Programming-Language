#include <iostream>
using namespace std;

// function overloading :--------- function with same name but should be differnt no of argument or different data type or else
// means naam same rhega but properties differnt rhegi
int sum(float a, int b)
{
    cout << "using function with two arguments" << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "using function with three arguments" << endl;
    return a + b + c;
}

// calculate the volume of cylinder
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}

// calculate the volume of cube
int volume(int a)
{
    return a * a * a;
}

// calculate the volume of cuboid
int volume(int l, int b, int h)
{
    return l * b * h;
}
int main()
{
    cout << "this is about function overloading in c++ programming " << endl;
    cout << "the sum of 3 and 6 is : " << sum(3, 6) << endl;
    cout << "the sum of 3,7 and 6 is : " << sum(3, 7, 6) << endl;
    cout << "the volume of cube of side 3 : " << volume(3) << endl;
    cout << "the volume of cylinder with radius 3.17 and height 5 : " << volume(3.17, 5) << endl;
    cout << "the volume of cuboid of length 3 width 2 and height 1 is  : " << volume(3, 2, 1) << endl;

    return 0;
}