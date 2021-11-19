#include<iostream>
using namespace std;

int main(){
    cout<<"this is about pointer in c++ programming"<<endl;

    // what is a pointer?
    // it is a datatype which holds the address of the other data types .

    int a=3;
    
    // it is the pointer variable p of integer type which hold the address of the integer type variable 
    // here (&) -----> address of operator  
     
    int *p=&a;

    // it will print the address of the hexadecimal type 
    cout<<p<<endl;
    cout<<"address of a  is  : "<<&a<<endl;
    cout<<"address of a  is  : "<<p<<endl;

    // here (*) ----------> dereferencing operator (value at operator)
    cout<<"the value present in the address a is : "<<*p<<endl;

    // pointer to pointer 
    int **c=&p;
    cout<<"the address of the pointer variable p is  :"<<c<<endl;
    cout<<"the address of the pointer variable p is  :"<<&p<<endl;
    cout<<"the value at address c is : "<<*c<<endl;
    cout<< "the value at address(address(c)) is : "<<**c<<endl;






    return 0;
}