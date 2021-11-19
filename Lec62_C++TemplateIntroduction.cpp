#include <iostream>
using namespace std;

int main()
{
    cout << "this is the introduction to Template in c++ programming " << endl;
    return 0;
}

// Note:----- Templates is also called parameterized classes

// why use templates:
//     to validate the dry principle
//     Generic Programming:---- means ek hi baar class define kri aur wo sbhi data types ke liye bn gyi specific koi data type
//                               ke liye nhi rhi wo ..!

// ----------------------------------------------------------------------------------------------------------------
// Syntax for templates
// T can be int, float, char etc.........................!
// template <Class T>
// class Vector{
//     T * arr;
//     Public:
//         Vector(T*arr){
//             // code
//         }

//         // other methods

// }

// the above template represent many number of classes

// int main(){
//     Vector<int> myVec(ptr);
//     Vector<float> myfVec(ptr1);
// }

// Templates and STL are very very necessary