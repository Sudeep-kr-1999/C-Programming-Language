#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    int a;
    int b;

public:
    void getDataSimple()
    {
        cout << "Enter the value of a : ";
        cin >> a;
        cout << "Enter the value of b : ";
        cin >> b;
    }

    void performOperationsSimple()
    {
        cout << "the value of a + b is : " << a + b << endl;
        cout << "the value of a - b is : " << a - b << endl;
        cout << "the value of a * b is : " << a * b << endl;
        cout << "the value of a / b is : " << a / b << endl;
    }
};

class ScientificCalculator
{
    int a;
    int b;

public:
    void getDataScientific()
    {
        cout << "Enter the value of a : ";
        cin >> a;
        cout << "Enter the value of b : ";
        cin >> b;
    }

    void performOperationsScientific()
    {
        cout << "the cos(a) and cos(b) is : " << cos(a) << " " << cos(b) << endl;
        cout << "the sin(a) and sin(b) is : " << sin(a) << " " << sin(b) << endl;
        cout << "the value of exp(a) and exp(b) is : " << exp(a) << " " << exp(b) << endl;
        cout << "the value of tan(a) and tan(b) is : " << tan(a) << " " << tan(b) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int main()
{
    cout << "this is the solution of the Lec41_ExerciseInC++Inheritance " << endl;
    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();

    calc.getDataSimple();
    calc.performOperationsSimple();
    return 0;
}

// question :---------
// create 2 classes :
// 1. simple calculator--- takes input of two number using a utility function and perform + - * / and display the result
// using another function
// 2. scientific calculator--- takes input of two number and perform any 4 scientific operations of your choice  and display
//   using another function
// 3. create another class hybrid calculator and inherit those 2 in this
// what type of inheritance using-------- multiple inheritance
// which mode of inheritance is using--------- public mode for both the classes
// how is code reusability implemented
// create an object of hybrid calculator and display result of scientific and simple calculator