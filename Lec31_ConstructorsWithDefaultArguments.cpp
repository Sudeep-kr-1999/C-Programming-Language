#include <iostream>
using namespace std;
class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a, int b = 9, int c = 8)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();
};

void Simple ::printData()
{
    cout << "the value of data1 is  : " << data1 << endl;
    cout << "the value of data2 is  : " << data2 << endl;
    cout << "the value of data3 is  : " << data3 << endl;
}
int main()
{
    cout << "this is about constructor with default arguments in c++ programming" << endl;
    Simple s1(1, 4);
    s1.printData();

    Simple s2(1);
    s2.printData();

    Simple s3(1);
    s3.printData();
    return 0;
}