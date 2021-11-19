#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// in call by value logic
void swap(int a, int b)
{
    cout << "the value of formal a before swapping is : " << a << endl;
    cout << "the value of formal b before swapping is : " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "the value of formal a after swapping is : " << a << endl;
    cout << "the value of formal b after swapping is : " << b << endl;
}

// call by address(or reference using pointers)
void swap_pointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// call by references using reference varible
// void swap_referenceVariable(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// returning a reference variable
int &swap_referenceVariable(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}
int main()
{
    cout << "this is about call by value and call by refernce(address / pointer) in functions of c++" << endl;
    int a = 4;
    int b = 5;
    // cout << "the sum of a,b is :" << sum(4, 5) << endl;
    // cout << "the value of actual a before swapping with swap function : " << a << endl;
    // cout << "the value of actual b before swapping with swap function : " << b << endl;
    // swap(a, b);
    // cout << "the value of actual a after swapping with swap function : " << a << endl;
    // cout << "the value of actual b after swapping  with swap function : " << b << endl;

    // cout << "the value of actual a before swapping with swap_pointer function : " << a << endl;
    // cout << "the value of actual b before swapping with swap_pointer function : " << b << endl;
    // swap_pointer(&a, &b);
    // cout << "the value of actual a after swapping with swap_pointer function : " << a << endl;
    // cout << "the value of actual b after swapping with swap_pointer function : " << b << endl;

    // cout << "the value of actual a before swapping with swap_referenceVariable function : " << a << endl;
    // cout << "the value of actual b before swapping with swap_referenceVariable function : " << b << endl;
    // swap_referenceVariable(a, b);
    // cout << "the value of actual a after swapping with swap_referenceVariable function : " << a << endl;
    // cout << "the value of actual b after swapping with swap_referenceVariable function : " << b << endl;

    cout << "the value of actual a before swapping with swap_referenceVariable function : " << a << endl;
    cout << "the value of actual b before swapping with swap_referenceVariable function : " << b << endl;

    //note:-----  this will set the the value of refernce returned by the function to 766 i,e the value reffered by a will be set to 766
    swap_referenceVariable(a, b) = 766;
    cout << "the value of actual a after swapping with swap_referenceVariable function : " << a << endl;
    cout << "the value of actual b after swapping with swap_referenceVariable function : " << b << endl;
    return 0;
}

// note:------- call by address( or reference of pointer) and call by reference variable will modify the actual argument while call by value
// donot modify the actual argument