# include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout<<"it is about constants, manipulators and operators precedences in c++ programming language"<<endl;
    // int a=34;
    // char c='c';
    // cout<<"the value of character is : "<<c<<endl;
    // c='d';
    // cout<<"the value of chracter now is :"<<c<<endl;
    // cout<<"the value of a is :"<<a<<endl;
    // a=45;
    // cout<<"the value of a is :"<<a<<endl;

    // constants in c++ programming
    // const int a=3;
    // cout<<"the value of a is:"<<a<<endl;

    // a=5; it will give the error because we cannot change the constant variable.........!
    // note:-------------- we must initialize the variable once we declare it as the constant variable...............!(very very important rule)
    // const char b;


    // -----------------------------------------------------------------------------------------------------------------------------------------------------------------
    // manipulators:-------------- ye wo operators hote h jo hamare data display ko formatting krne mein help krte h.........!!!!!!!!!
    // endl:---------------> endl is the manipulator which is used to break the line......!

    // setw() manipulators:---------------
    // int a=3,b=78,c=1233;
    // cout<<"the value of a is :"<<a<<endl;
    // cout<<"the value of b is :"<<b<<endl;
    // cout<<"the value of c is :"<<c<<endl;
    // cout<<"the value of a after setw() is :"<<setw(4)<<a<<endl;
    // cout<<"the value of b after setw() is :"<<setw(4)<<b<<endl;
    // cout<<"the value of c after setw() is :"<<setw(4)<<c<<endl;
    // note:-------setw(n) n mein hum jo value dege utni width mein value print ho jaayegi front se width space dega agr value length equal to width nhi h to(very very important)
                //    in simple words ye cheezo ko rigt justified kr dega.........!


    // -----------------------------------------------------------------------------------------------------------------------------------------------------------------
    // Operator Precedence:---------------------------------
    int a=3,b=4;
    int c=a*5+b;
    cout<<"the value of c is : "<<c<<endl;

    // note:------operator precedence can we viewed by source no need to remember this..........!!!!!!!!!!!!!

    return 0;
}