#include <iostream>
#include <string>
using namespace std;

class Binary
{
    // by default all the member are private 
    string s;
    void check_bin();

public:
    void read();
    void ones_compliment();
    void display();
};

void Binary::read()
{
    cout << "Enter a binary number : ";
    cin >> s;
}

void Binary::check_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void Binary ::ones_compliment()
{

    check_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void Binary ::display()
{
    cout << "displaying your binary number " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<"\n";
}

int main()
{
    cout << "this is about nesting of member function in class in c++ programming" << endl;

    // Nesting of member functions: function ke andar dushre function ko call kr skte hai thats called nesting
    Binary b;
    b.read();
    // b.check_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}

// OPPS RECAP :

// OOPS - Classes with objects

// C++ ---> initially called ----> C with classes by stroustroup
// class ----> extention of structure (in C)
// structures has limitations:
//         ----> members are public not private
//         ----> no methods/ functions

// classes ----> structure + new
// classes -----> can have methods and properties
// classes -----> can make few members as private and few as public
// structures in C++ are typedefed
// you can declare objects along with the class declaration like this:

/* class Employee{
    // class definition 

}harry, rohan, lovish;
*/

// harry.salary=8 makes no sense if salary is private .
