#include <iostream>
using namespace std;

int main()
{
    cout << "it is about revisiting pointers and about new and delete keywords offered by c++" << endl;
    // Basic example of pointer
    int a = 4;
    int *ptr = &a;
    cout << "the value of a is : " << *(ptr) << endl;

    // new and delete keyword
    // new keyword ek pointer deta hai jiska intitial value hum usme set kr skte hai of whaterver data type we need dynamically
    int *p = new int(40);
    float *q = new float(40.5);
    cout << "the value at address p is : " << *p << endl;
    cout << "the value at address q is : " << *q << endl;

    // it will return pointer to the array having size 3 (very very important)
    int *arr = new int[3];
    arr[0] = 10;

    arr[1] = 20;
    // means value at address (arr+1) which is arr[1] is 20
    *(arr + 1) = 20;

    arr[2] = 40;

    // delete[] arr;

    cout << "the value at arr[0] is  : " << arr[0] << endl;
    cout << "the value at arr[1] is  : " << arr[1] << endl;
    cout << "the value at arr[2] is  : " << arr[2] << endl;

    // delete keyword

    return 0;
}