#include <iostream>
using namespace std;
class BankDeposit
{
    int class_principal;
    int class_years;
    float class_intrestRate;
    float class_returnValue;

public:

    // this blank constructor is necessary because since humne constructor banaye h to agar hum argument nhi dege to compiler
    // confuse ho jaayega isliye blank constructor bnana zaroori h.
    BankDeposit(){};
    BankDeposit(int principal, int years, float rate); //rate can be value like 0.04
    BankDeposit(int principal, int years, int rate);   // rate is like 10%, 20% etc.
    void show();
};

BankDeposit::BankDeposit(int principal, int years, float rate)
{
    class_principal = principal;
    class_years = years;
    class_intrestRate = rate;
    class_returnValue = class_principal;
    for (int i = 0; i < years; i++)
    {
        class_returnValue = class_returnValue * (1 + class_intrestRate);
    }
}

BankDeposit::BankDeposit(int principal, int years, int rate)
{
    class_principal = principal;
    class_years = years;
    class_intrestRate = float(rate) / 100;
    class_returnValue = class_principal;
    for (int i = 0; i < years; i++)
    {
        class_returnValue = class_returnValue * (1 + class_intrestRate);
    }
}

void BankDeposit::show()
{
    cout << endl
         << "Principal amount was : " << class_principal << " Return Value after : " << class_years << "years is :" << class_returnValue << endl;
}
int main()
{
    cout << "this is dynamic initialization of objects using constructors" << endl;
    int principal;
    int years;
    int integral_rate;
    float floating_rate;
    // cout<<"Enter the value of principal : ";
    // cin>>principal;
    // cout<<"Enter the value of years : ";
    // cin>>years;
    // cout<<"Enter the value of rate : ";
    // cin>>floating_rate;
    // BankDeposit bd1(principal,years,floating_rate);
    // bd1.show();

    // cout<<"Enter the value of principal : ";
    // cin>>principal;
    // cout<<"Enter the value of years : ";
    // cin>>years;
    // cout<<"Enter the value of rate : ";
    // cin>>integral_rate;
    // BankDeposit bd2(principal,years,integral_rate);
    // bd2.show();

    BankDeposit bd3;
    bd3.show();
    return 0;

}