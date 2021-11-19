#include <iostream>
using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "this is the time when constructor called for object number " << count << endl;
    }

    // it is a destructor
    ~num()
    {
        cout << "this is the time when my destructor is called for object number : " << count << endl;
        count--;
    }
};
int main()
{
    cout << "this is about destructors in c++ programming" << endl;
    cout << "we are inside a main funciton" << endl;
    cout << "creating first objects n1" << endl;
    num n1;
    {
        cout << "entering this block" << endl;
        cout << "creating two more objects" << endl;
        num n2, n3;
        cout << "exiting this block" << endl;
    }

    cout << "back to main " << endl;

    return 0;
}

// destructor:---it will free all the memory occupied by the connstructor while creating the object and working through it
// note:-- destructors never takes any argument nor does it return any value
// note:------- the order of execution of destructor is just opposite to the order of creation of constructor(vvi) 
