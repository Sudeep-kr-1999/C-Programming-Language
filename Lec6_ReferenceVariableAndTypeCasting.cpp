#include <iostream>
using namespace std;
int c = 45;
int main()
{

    // = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = ==  == = =  = = ==  == = = =  =
    // ---------------------------------------------------BUILT-IN DATA TYPES:-------------------------------------

    // int a, b, c;
    // cout << "Reference variable and type casting in c++ programming" << endl;
    // cout << "enter the value of a : ";
    // cin >> a;
    // cout << "enter the value of b : ";
    // cin >> b;
    // c = a + b;
    // cout << "the sum is : " << c << endl;
    // cout << "the global c is  : " << ::c << endl;
    // note:------------> "::" this double colon is known as scope resolution operator............!!!!
    // note:----------------> "::c" if we donot give anything in the left side of the scope resolution operator then by default it denotes
    //                          the global scope and as for this example it is refering global c here ............!

    // = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = ==  == = =  = = ==  == = = =  =
    // ---------------------------------------------------literals in c++ programming :-------------------------------------

    float d=34.5f;
    long double e=34.4l;
    // note:-----------------> by default decimal literal double hota h
    // 34.4f-------------> it is considered as float (f) is used to denote float
    // 34.4l-----------------> it is considered as long double as (l) is used to denote long double

    cout<<"the value of d is  : "<<d<<endl;
    cout<<"the value of e is : "<<e<<endl;

    // note:----by default the decimal number is double in nature.........!!!!!!!!
    cout<<"the size of 34.4 is : "<<sizeof(34.4)<<endl;
    cout<<"the size of 34.4f is : "<<sizeof(34.4f)<<endl;
    cout<<"the size of 34.4F is : "<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4L is : "<<sizeof(34.4L)<<endl;
    cout<<"the size of 34.4l is : "<<sizeof(34.4l)<<endl;

    // = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = ==  == = =  = = ==  == = = =  =
    // ---------------------------------------------Reference_Variable-------------------------------------------------------
    // float x = 455;
    // cout << "The value of x is : " << x << endl;

    // // note:------ here y is a reference to the x hence y is a reference variable.............!
    // //    and if we change either of the one the value of other also get changed.....!
    // float &y = x;
    // cout << "The value of y is  : " << y << endl;

    // = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = ==  == = =  = = ==  == = = =  =
    // --------------------------------------------- Typecasting -------------------------------------------------------
    // int a=45;
    // cout<<"the value of a is  : "<<a<<endl;
    // // float b=(float)a;
    // // we can also write like this in c++
    // float b=float(a);
    // cout<<"the value b is :  "<<b<<endl;
    // float c=45.46;
    // cout<<"the value of c is  : "<<c<<endl;
    // // int d=(int)c;
    // // we can also write like this in c++
    // int d=int(c);
    // cout<<"the value of d is  : "<<d<<endl;

    int a = 45;
    float b = 45.46;

    cout << "the expression is " << (a + b) << endl;
    cout << "the expression is " << (a + int(b)) << endl;
    cout << "the expression is " << (a + (int)b) << endl;

    return 0;
}