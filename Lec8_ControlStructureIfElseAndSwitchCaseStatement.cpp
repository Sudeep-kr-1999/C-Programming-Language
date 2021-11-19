#include<iostream>
using namespace std;

int main(){
    cout<<"this is about control structure if else and switch case statement";
    int age;
    cout<<"enter the value of your age : ";
    cin>>age;
    
    // if(age<18 && age>0){
    //     cout<<"you cannot come to my party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"you are a kid and you will get a kid pass to the party"<<endl;

    // }
    // else if (age<1){
    //     cout<<"you are not yet born"<<endl;
    // }
    // else{
    //     cout<<"you can come to the party"<<endl;
    // }


    // switch case:-------------
    switch(age){
        case 18:
            cout<<"you are 18"<<endl;
            break;
        case 22:
        cout<<"you are 22"<<endl;
        break;

        case 2:
        cout<<"you are 2"<<endl;
        break;

        default:
        cout<<"no special cases"<<endl;
        break;
    }

    return 0;
    
}

// note:-- if break is not present there in the cases then jo case match krega usko lekar baaki ke neeche saare case execute krege including default 








// types of control structure:
// 1. sequence structure
// 2. selection structure
//    ---- if else statement 
    //  -----switch case 
// 3. loop structure
