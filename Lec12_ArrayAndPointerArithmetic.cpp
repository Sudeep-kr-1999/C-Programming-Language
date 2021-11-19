#include <iostream>
using namespace std;

int main()
{
    cout << "this is about arrays and pointer arithmetic in c++ programming" << endl;
    // int marks[4] = {23, 24, 25, 26};
    int marks[] = {23, 24, 25, 26};
    // int mathsMarks[4];
    // mathsMarks[0] = 2278;
    // mathsMarks[1] = 738;
    // mathsMarks[2] = 378;
    // mathsMarks[3] = 578;

    // cout << "these are maths marks" << endl;
    // cout << mathsMarks[0] << endl;
    // cout << mathsMarks[1] << endl;
    // cout << mathsMarks[2] << endl;
    // cout << mathsMarks[3] << endl;

    // cout << "these are marks " << endl;

    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // marks[2] = 455;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "the value of marks " << i << " is  : " << marks[i] << endl;
    // }

    // pointers and arrays
    // note:-- in arrays the name of the array store the address of the first element of the array no need to use (&) there
    // pointer arithemtic:---
    // address_new= address_current+i*size_of_data_type , here i means:-- kitna unit aage bhadke data nikalna chahte h hum
    int *p = marks;

    // this will print the first element of the array and increment the pointer to the next element 
    cout<<*(p++)<<endl;

    // here due to the above operation pointer get incremented and here it again pre increment the pointer so it will print the 3rd element of the array 
    cout<<*(++p)<<endl;
    // cout << "the value of marks[0] is :" << *p << endl;
    // cout << "the value of marks[1] is :" << *(p+1) << endl;
    // cout << "the value of marks[2] is :" << *(p+2) << endl;
    // cout << "the value of marks[3] is :" << *(p+3) << endl;

    return 0;
}