#include <iostream>
using namespace std;

class Employee{

    // note:-- static variable by default 0 se initialize ho jaata h 
    // note:--- we cannot assign value to the static variable inside here it is not allowed becuse it is a non const static variable but if it is a 
                // const static variable then we can do this  
    static int count;
    int id;
    public:
        void setData(){
            cout<<"Enter the id for the employee : ";
            cin>>id;
            count++;
        }

        void getData(){
            cout<<"the id for the employee is  : ";
            cout<<id<<endl;
            cout<<"This is employee number : "<<count<<endl;
        }


        // Note:------- static function sirf static members either variable or function ko hi access krta hai baaki dushre kisi ko nhi. it is also called class methods!! 
        static void getCount(){
            cout<<"The value of count is : "<<count<<endl;
        }
};


// static variable is also called class variable hence it is the property of the class and shared by all the objects 
// iski lifetime tb tk hota hai jab tak programme terminate nhi ho jaata h  
// default value is 0 
// int Employee :: count;

// if we want to set the static variable to any value then we can do like 
int Employee :: count=1000;
int main()
{
    cout << "it is about the static data members and methods in c++ programming" << endl;
    Employee harry,rohan, lovish;
    harry.setData();
    harry.getData();

    // to call the static function 
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();
    lovish.setData();
    lovish.getData();
    Employee::getCount();
    return 0;
}