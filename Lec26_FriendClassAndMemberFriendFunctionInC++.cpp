#include <iostream>
using namespace std;

// forward declaration
// compiler ko btane ke liye ki complex class aage h
class complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    // note:------- compiler ko pta nhi ki complex class mein a,b hai ya nhi kyuki wo complex class tk nhi paucha h to ya pr
    // error aayega iske liye hum yaha bas declaration dege definition baad mein dege

    // int sumRealComplex(complex o1, complex o2)
    // {
    //     return (o1.a + o2.a);
    // }

    int sumRealComplex(complex o1, complex o2);
    int sumCompComplex(complex o1, complex o2);
};
class complex
{
    int a, b;

    // individually declaring function as friend
    // friend int Calculator ::sumRealComplex(complex o1, complex o2);
    // friend int Calculator :: sumCompComplex(complex o1, complex o2);

    // aliter:---declare the entire class as friend
    // means calculator class mere kisi bhi private data ko access kr skta h
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    cout << "it is about friend class and member friend function in c++ programming" << endl;
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    int result = calc.sumRealComplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is : " << result << endl;
    int result1 = calc.sumCompComplex(o1, o2);
    cout << "the sum of complex part of o1 and o2 is : " << result1 << endl;

    return 0;
}