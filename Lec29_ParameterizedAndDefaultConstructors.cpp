// #include <iostream>
// using namespace std;
// class Complex
// {
//     int a, b;

// public:
//     // creating a constructor
//     Complex();

//     // parameterized constructor
//     Complex(int ,int );
//     void printNumber()
//     {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };

// // default constructor as it takes no arguments
// Complex ::Complex()
// {
//     cout << "in the default constructor" << endl;
//     a = 10;
//     b = 20;
// }

// // this is a parameterized constructor as it takes parameters
// Complex ::Complex(int x , int y)
// {
//     cout << "in the  parameterized constructor" << endl;
//     a = x;
//     b = y;
// }
// int main()
// {
//     cout << "this is about parameterized constructors as well as default constructors" << endl;
//     // Complex a;
//     // a.printNumber();

//     // for parameterized constructor
//     // implicit call
//     // Complex a(4,6);
//     // a.printNumber();

//     // explicit call
//     Complex b=Complex(5,7);
//     b.printNumber();
//     return 0;

// }

// --------------------------------------------------------------------------------------------------------
// Second example
#include <iostream>
using namespace std;

class Point{
    int x,y;
    public:
        Point(int a, int b){
            x=a;
            y=b;
        }
        void displayPoint(){
            cout<<"The point is ("<<x<<" , "<<y<<")"<<endl;
        }

};


// create a function who takes 2 point object and compute the distance between them  


int main()
{
    cout << "this is the second example for the parameterized constructor" << endl;
    Point p(1,1);
    Point q(4,6);
    p.displayPoint();
    q.displayPoint();
    return 0;

}