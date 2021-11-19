#include <iostream>
using namespace std;

// base class
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 50.0;
    }

    Employee() {}
};

// visibility mode

// note:------ base class ke private member ko inherit nhi kr skte
// notes:---------- default visibility mode is private
// private visibility mode :-------- the public members of the base class become private member of the derived class
// public visibility mode :------- public member of the base class become public member of the derived class

/*syntax to make derived class
derive class automatically base class ke constructor ko call krta h 
class {{derive-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    // members/methods/etc............! 
}  
*/

// derived class from base class Employee
class Programmer : public Employee
{
public:
    int languageCode = 9;
    Programmer(int inpId)
    {
        id = inpId;
    }

    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    cout << "this is about Inheritence Syntax and Visibility Mode in c++ programming" << endl;
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillf(10);
    skillf.getData();
    cout << skillf.languageCode << endl;
    cout << skillf.id << endl;

    return 0;
}