#include <iostream>
using namespace std;

int main()
{
    cout << "polymorphism in c++ object oriented programming" << endl;
    return 0;
}

// polymorphism:--------------( many + forms)
// 1. one name and multiple forms
// 2.  eg:-- function overloading, operator overloading, virtual funcitons

// types of polymorphism :------------------------------------------------------------------------------
//     a. compile time polymorphism (early binding or static binding):------------------------------------
//      yha pr compile time pr hi decision le liya jaata hai ki kaun sa function call hone wla  h ,
//      that is why it is also called static binding, or early binding .

//      it is achieved in two ways :
//      1. function overloading
//      2. operator overloading

//     b. runtime polymorphism (dynamic binding):--------------------------------------------------------
//     yha kaun sa function kaun hoga wo compile time mein decide nhi hota , compiler kaun sa function call hoga
//     ye decide krne wala kaam postpone kr deta h or say defer kr deta h runtime ke liye , and jb programme ko execute
//     krege to hume pta padega kaun sa function run krne wla hai , on the basis of the pointer assigned

//     Note:-- run time polymorphism is achieved by using virtua function in c++ programming
