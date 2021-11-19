#include <iostream>
using namespace std;

int main()
{
    cout << "this is about virtual base class in c++ programming" << endl;
    return 0;
}
//   note:------------- virtual base class

// if                                                  A
//                                                     |
//                                                     |
//                                      --------------- ----------------
//                                      |                              |
//                                      |                              |
//                                      B                              C
//                                      |                              |
//                                      |                              |
//                                      --------------- ----------------
//                                                     |
//                                                     |
//                                                     D
// if the above scenario happen where:
// A-------->B
// A-------->C
// B AND C ------------>D

// Then if some variable suppose "a" is coming from A will get shared to Both B and C and again when D is inheriting the class
// B and C then that variable "a" will get inherited twice one from B and One from C which we donot want because we want only
// one copy so we declare A as virtual base class which means Class A entitiy ka jo bhi element hoga wo inherit hone waale ko
// sirf ek hi baar milega multiplies times nhi milega .

// syntax :---------------------

// class A{

// };

// class B :virtual public A{

// };

// class C:virtual public A{

// };

// class D:public C , public D{

// };
