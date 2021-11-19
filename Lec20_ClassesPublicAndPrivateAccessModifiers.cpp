#include <iostream>
using namespace std;
class Employee{
    private:
        int a;
        int b;
        int c;

    public:
        int d;
        int e;
        
        // note:----- we may define function inside or outside of the class as per our choice 

        // declaration of the function 
        void setData(int a, int b, int c);

        void getData(){
            cout<<"The value of a is  : "<<a<<endl;
            cout<<"The value of b is  : "<<b<<endl;
            cout<<"The value of c is  : "<<c<<endl;
            cout<<"The value of d is  : "<<d<<endl;
            cout<<"The value of e is  : "<<e<<endl;

        }

};

// scope resolution operator  (::)
void Employee :: setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;

}

int main()
{
    cout << "this is about classes, public and private access modifiers in object oriented programming" << endl;
    Employee harry;
    harry.d=34;
    harry.e=89;
    harry.setData(1,2,4);
    harry.getData();
    return 0;
}

// note:-------class ke private data ko sirf uske andar ke function hi access kr skte hai baaki koi nhi aur public data ko koi bhi access kr skta h 

// Note:---  the below syntax is also valid for the creation of objects it will create the object along with class definition 
// class Employee{
//     // class definition 
// }harry,rohan,lovish;