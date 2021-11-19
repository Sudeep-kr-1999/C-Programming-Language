#include <iostream>
using namespace std;

int main()
{
    cout << "Containers in STL in C++ Programming" << endl;
    return 0;
}

// note:---------- containers are the objects which stores the data

// There are 3 types of containers generally
// 1.Sequence Containers : Stores data in linear fashion(vector,list,dequeue,..)

// 2.Associative Containers : it is basically design to get the fastest access of the data . basically direct access of the data
//                             Set , MultiSet ,Map ,MultiMap .......etc(store data like trees (BST generally..))

// 3.Derived Containers :  Real World Modelling(Stack, Queue,Priority Queue ....)

// Sequence Containers :---------------------------
// 1. Vector:---- Random Access Fast and Insertion and Deletion Slow , but insertion at the end is fast, in middle slow

// 2. List:-- random access slow , middle insertion fast , insertion at the end is fast

// Associative container:------- All operation is fast except random access

// Derived Containers:------- Depends ----> Can be get info through data structure