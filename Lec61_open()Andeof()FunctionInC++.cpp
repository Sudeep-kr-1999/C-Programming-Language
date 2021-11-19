#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "this is about open() and eof() in file handling in c++ programming" << endl;
    // ofstream out;
    // out.open("Lec59_WorkingWithFilesInC++.txt");
    // // note:-------by default pure file ke data ko replace krega without any endline and space character between 2 lines
    //   as done below using 2 out.
    // out << "This is me Sudeep Kumar with open function\n";
    // out << "This is me Sudeep Kumar with open function";
    // out.close();

    ifstream in;
    string st;
    in.open("Lec59_WorkingWithFilesInC++.txt");

    // ye tarike se hum ek ek word ya ek ek line krke kr paaayege
    // getline(in,st);
    // cout<<st;

    // another way to read from the file using eof() function
    // note:------------ jb end of file tk pauch jaayege to eof() function 1 return krega to jb tk 1 naa aaye or jb tk
    // 0 maintain rhe tb tk read krege
    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }
    in.close();
    return 0;
}