#include <iostream>
#include <list>
using namespace std;

void display(list<int> &li)
{
    list<int>::iterator it;

    // note:-------- li.end() iterator ko end ka reference dega jb  tk end tk na pauche chlte rhega
    for (it = li.begin(); it != li.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
}
int main()
{
    cout << "This is about List in STL in c++ programming" << endl;

    // it will create list of 0 length
    list<int> list1;
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);

    // back se ek element delete kr dega
    list1.pop_back();

    // aage se delete krega
    list1.pop_front();

    // beech se delete krne ke liye
    // list1.remove(value ) : = saari occurences remove ho jaayegi
    list1.remove(9);

    // for sorting the list
    list1.sort();
    display(list1);
    // creating the iterator
    // hum scope resolution operator use krege because iterator list class ke andar hota h
    // list<int>::iterator iter;

    // make the iterator to point to the beginning of the list
    // iter = list1.begin();

    // print the value pointed by iterator just like the pointer(very very important)
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";

    // it is the empty list of size 7
    list<int> list2(3);
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    list2.sort();
    display(list2);

    // list1.merge(list2):---------- it will merge sorted list
    list1.merge(list2);
    cout << "list 1 after merging : ";
    display(list1);

    // reversing the list
    list1.reverse();
    display(list1);
    return 0;
}

// note:---------- by default list is bidirectional linear link list (vvi)
