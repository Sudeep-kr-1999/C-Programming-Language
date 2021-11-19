#include <iostream>

// class for file handling in c++
#include <fstream>
using namespace std;

int main()
{
    cout << "it is about I/O Reading and Writing in files in c++ programming" << endl;

    // opening file using constructor and writing it

    // used for write operation
    string st = "harry bhai";
    ofstream out("Lec59_WorkingWithFilesInC++.txt");
    // just like cout
    out << st;

    string st2;
    // opening files using constructor and reading it
    // note:----- by default ifstream ka use se file se sirf first word hi milta hai agar hum space ya new line character use kr le
    //             to wo by default nhi aayega(vvi);

    // we can use getline to read whole line from the file har ek line ke liye har baar getline use hoga
    ifstream in("Lec59_WorkingWithFilesInC++1.txt");
    // just like cin
    // in>>st2;
    // cout<<st2;

    getline(in, st2);
    // just like cin
    cout << st2;

    return 0;
}

// the useful classes for working with files in c++ are following :--------
// 1.fstreambase
// 2. ifstream -------->input stream and it is derived from fstreambase
// 3 ofstream ---------> output stream and it is derived from fstreambase

// in order to work with files in c++ , you will have to open it first , primarily there are 2 ways to open the file :
// 1. using the constructor
// 2. using the member function open() of the class
