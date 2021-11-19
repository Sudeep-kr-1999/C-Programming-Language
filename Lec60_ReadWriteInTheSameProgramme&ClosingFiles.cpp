#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "this a tutorial where we read write in the same file and closing the files in c++ programming" << endl;

    // connecting out file with hout stream
    // ofstream hout("Lec59_WorkingWithFilesInC++.txt");

    // // creating the name variable enter by the user
    // string name;
    // cout << "Enter your name :";

    // // getting input from the user
    // getline(cin, name);

    // // writing a string to the file
    // hout << "My name is " + name;
    // cout << "my name is " << name << endl;

    // hout.close();

    // -------------------------------------------------------------------------------------------------------------

    ifstream hin("Lec59_WorkingWithFilesInC++.txt");
    string fileContent;
    getline(hin, fileContent);
    cout << "the content from the file coming is : ";
    cout << fileContent;
    hin.close();
    return 0;
}