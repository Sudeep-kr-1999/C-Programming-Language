#include <iostream>
using namespace std;

// compiler compile time mein hi return value ko actual call ke jagah pr replace kr deta hai jo ise kaafi fast bna deta h
inline int product(int a, int b)
{
    return a * b;
}

// int product(int a, int b)
// {
//     // ye wo variable hote hai jo har baar change krne par value ko retain rkhte hai means jaise hum yha value 0 se 1 change kiya to next time
//     // c ki value 1 retain rhegi wapas 0 nhi hogi aur again execute krne pr update hoti chali jaayegi

//     // static ke saath generally inline use ni krte h
//     static int c = 0; // this executes only once
//     c = c + 1;
//     return a * b + c;
// }

// here factor is a default argument
// NOTE:----- Default arguments will start from right and go to left to avoid conflicts or error /
float moneyRecieved(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}


// const variable:------- if we donot want to change the value of some variable we make it constant 
// int strlen(const *p){

// }
int main()
{
    cout << "this is about inline function , default arguments and constant arguments in c++ programming" << endl;
    int a;
    int b;
    int money = 100000;
    cout << "enter the value of a : ";
    cin >> a;
    cout << "enter the value of b : ";
    cin >> b;
    cout << "the product of a and b is  :" << product(a, b) << endl;
    cout << "if you have " << money << " rs in your bank account , you will recieve " << moneyRecieved(money) << " rs after 1 year " << endl;
    cout << "For VIP if you have " << money << " rs in your bank account , you will recieve " << moneyRecieved(money, 1.10) << " rs after 1 year " << endl;

    return 0;
}