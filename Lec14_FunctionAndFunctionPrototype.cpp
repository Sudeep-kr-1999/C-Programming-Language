#include<iostream>
using namespace std;


// agar hum main ke baad koi function likhe hai to humne compiler ko btana padega ki wo funciton main ke baad available hai kyuki wo top to down
// kaam krta hai aur top to down mein agar function call se pehle compiler ko function nhi mila to wo error dega isliye use btane ke liye ki function 
// call ke baad mein bhi available ho skta hai hum function prototype use krte hai jisse compiler smjh jaata hai ki baad mein koi aisa function hai 
// aur usko khojkr call kr deta h 
// this is a function prototype 
// return_type function_name(arguments);


// this is the way to create prototype of void function with no paramter 
// void g(void)
// void g();

int sum(int a,int b);
int sum(int, int );



int main(){
    cout<<"it is about the functions and function prototype in c++ programming"<<endl;
    int num1;
    int num2;
    cout<<"enter the first number : ";
    cin>>num1;
    cout<<"enter the second number : ";
    cin>>num2;
    cout<<"the sum of the entered number is  : "<<sum(num1,num2);

    // here num1 and num2 is actual parameter 
    // return 0 ka means ye os ko btata hai ki programme successfully execute ho gyi hai ab kaam rok do 
    return 0;


}


int sum(int a, int b){
    // here a and b is formal paramters which are taking value from actual paramters 
    int c=a+b;
    return c;
}

// note:-- formal parameters:------ ye wo parameter hote hai jo function mein bnaye hote hai 
        // actual parameters:------- ye wo parameter hote hai jo actual mein function ko pass kiye jaate h 

        // note:-- agar hum formal parameters ko change krte hai to actual parameter mein koi change nhi aayega 