#include<iostream>
using namespace std;

int main(){
    cout<<"Basic input and output in c++ programming"<<endl;
    int num1;
    int num2;
    // note:----------> ("<<" this sign is called insertion operator!)
    cout<<"Enter the value of num 1 : ";
    // note:--------------> (">>" this sign is called extraction operator!)
    cin>>num1;
    cout<<"enter the value of num 2 : ";
    cin>>num2;
    cout<<"sum is : "<<num1+num2;

    return 0;

    // note:-------------> <iostream> means input steram and output stream
    // stream:-----> in c++ sequence of bytes corresponding to input and output are commonly known as streams.
    // input stream:--------> direction of flow of bytes takes place from input device to the main memory
    // output stream:-------> direction of flow of bytes takes place from the main memory to the output device
}