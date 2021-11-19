#include <iostream>
using namespace std;

// Note:--- data hiding is not available in the structure classes is introduced in c++
            // we can  include functions inside the structure in c++ but this is not available in c programming. 

// structure : user defined data types
// struct employee{
//     int eid;
//     char favChar;
//     float salary;
// };

// typedef struct employee{
//     int eid;
//     char favChar;
//     float salary;
// }ep;

// HERE HUM BELOW UNION ke andar ke 3 data types mein se koi ek use krege at a time
// c++ will select the largest memory among the option in the variable in the union and saare variable jo union mein hai unme memory share kr dega
// phir hum at a time saare mein se koi ek apne need ke hisab se use kr lege
union money
{
    int rice;     //4
    char car;     //1
    float pounds; //4
};

int main()
{
    cout << "this is about the structure , unions and enums in c++ programming" << endl;
    // struct employee harry;
    // struct employee shubham;
    // struct employee rohan;
    // harry.eid=1;
    // harry.favChar='c';
    // harry.salary=12000000;

    // cout<<harry.eid<<endl;
    // cout<<harry.favChar<<endl;
    // cout<<harry.salary<<endl;

    // for typedef with struct
    // ep harry;
    // harry.eid=1;
    // harry.favChar='c';
    // harry.salary=12000000;

    // cout<<harry.eid<<endl;
    // cout<<harry.favChar<<endl;
    // cout<<harry.salary<<endl;

    // note:-- in union jo ek variable ki value hogi whi sb variable jo available hai unme share ho jaayegi aur us ek variable ke value ke hisab se aur data
    // type ke hisab se khud ki value ko bhi modify kregi
    // for ex: below pehle rice ki value 34 thi to saare variable uske hisab se set ho gyye baad mein jb humne car ko use kiya to saare variable car ke
    // character ki ascii value ki hisab se set ho gye meins c ka ascii value 99 rice mein chla gya and like that...!
    // union money m1;
    // m1.rice=34;
    // m1.car='c';
    // cout<<m1.rice<<endl;
    // cout<<m1.car<<endl;

    // enum saare consisting element ko ek integer assign krta h in order 0 to n.... !
    // here breakfast=0
    // lunch=1
    // dinner=2
    enum meal
    {
        breakast,
        lunch,
        dinner
    };

    // it become the datatype
    meal m1 = lunch;
    cout << m1 << endl;
    cout << breakast << endl;
    cout << lunch << endl;
    cout << dinner << endl;

    return 0;
}