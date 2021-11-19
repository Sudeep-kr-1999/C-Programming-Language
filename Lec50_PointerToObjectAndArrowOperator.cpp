#include <iostream>
using namespace std;
class Complex
{
    int real;
    int imaginary;

public:
    void getdata()
    {
        cout << "the real part is : " << real << endl;
        cout << "the imaginary part is :" << imaginary << endl;
    }

    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    cout << "pointer to the object and arrow operator in c++ programming" << endl;
    Complex c1;
    // c1.setData(1,54);
    // c1.getdata();

    // --------------------------------------------------------------------------------
    // pointer to the object
    // Complex *ptr = &c1;

    // note:------- brackets are must we must put brackets because "." operator ki precedence higher hoti h "*" operator se agar
    //             bracket nhi lagayege to phele "." execute hona chahege jo hume error dega !!
    // (*ptr).setData(1, 54);
    // (*ptr).getdata();

    // --------------------------------------------------------------------------
    // Complex *ptr = new Complex();
    // (*ptr).setData(1, 54);
    // (*ptr).getdata();

    // --------------------------------------------------------------------------

    // Arrow operator (->) :arrow means assigned pointer ko dereference karo aur uske functionality to use kro
    Complex *ptr = new Complex();
    ptr->setData(1, 54);
    ptr->getdata();

    // --------------------------------------------------------------------------
    // array of objects
    Complex *ptr1 = new Complex[4];
    // it is the pointer to the first element of the array
    ptr1->setData(1, 4);
    ptr1->getdata();

    return 0;
}