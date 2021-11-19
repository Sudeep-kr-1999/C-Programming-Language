#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
        // cout << v.at(i) << endl;
    }
}
int main()
{
    cout << "Vector in STL in C++ programming" << endl;
    // int element;
    // int size;
    // cout << "enter the size of the vector : ";
    // cin >> size;
    // vector<int> vec1; //it is a zero length vector
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "enter an element to add to this vector : ";
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();
    // display(vec1);

        // note:--------- this is the way to make the iterator
    // vector<int>::iterator iter = vec1.begin();
    // // note iterator jha point krega wha se ek index pehle insert hoga
    // // vec1.insert(iter+1,566);

    // // if we want to insert multiple copy give a second argument as the no. of copies
    // vec1.insert(iter + 1, 5, 566);
    // display(vec1);

    // ----------------------------------------------------------------------------------------------
    int size = 5;

    // it is a four element character vector
    vector<char> vec2(4);
    // pushback():------------last index pr insert krta h aur age ki traf push krte jaata hai insert krne ke saath (vvi)
    vec2.push_back('a');
    display(vec2);

    // 4 Element character vector from vec2
    vector<char> vec3(vec2);
    display(vec3);

    // 6 element vector of 3rs
    vector<int> vec4(6, 3);
    // display(vec4);

    return 0;
}

// note:------------- why vector if array is available???
// ---> Array cannot be resized if one defined if we want to do so we have to make new array with new size,
//  but vector manages the size automatically
