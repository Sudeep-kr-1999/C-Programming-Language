#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    cout << "it is about function Objects(functors) in STL in c++ programming" << endl;
    // Function objects : a functon wrapped in a class so that it is available like an object
    // bascially ye ek object hai jo ki function ki trah kaam krta h

    int arr[] = {1, 73, 4, 2, 54, 77};
    // it means (starting index =0 )se {(starting index +5)= (0+5 )} se pehle tk element ko sort kr de (vvi)

    // by default it is in increasing order
    // sort(arr, arr + 5);

    // here greater<int> is a function object means greater template class ka object as a function use ho rha hai(vvi)
    // for descending order
    sort(arr, arr + 6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}

// sort algorithm example
// // sort algorithm example
// #include <iostream>     // std::cout
// #include <algorithm>    // std::sort
// #include <vector>       // std::vector

// bool myfunction (int i,int j) { return (i<j); }

// struct myclass {
//   bool operator() (int i,int j) { return (i<j);}
// } myobject;

// int main () {
//   int myints[] = {32,71,12,45,26,80,53,33};
//   std::vector<int> myvector (myints, myints+8);               // 32 71 12 45 26 80 53 33

//   // using default comparison (operator <):
//   std::sort (myvector.begin(), myvector.begin()+4);           //(12 32 45 71)26 80 53 33

//   // using function as comp
//   std::sort (myvector.begin()+4, myvector.end(), myfunction); // 12 32 45 71(26 33 53 80)

//   // using object as comp
//   std::sort (myvector.begin(), myvector.end(), myobject);     //(12 26 32 33 45 53 71 80)

//   // print out content:
//   std::cout << "myvector contains:";
//   for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
//     std::cout << ' ' << *it;
//   std::cout << '\n';

//   return 0;