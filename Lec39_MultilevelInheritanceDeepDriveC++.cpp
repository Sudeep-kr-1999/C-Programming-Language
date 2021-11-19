#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    Student()
    {
        cout << "this is the Student Class Constructor" << endl;
    }
    void setRollNumber(int n);
    void getRollNumber();
    ~Student()
    {
        cout << "this is the Student Class Destructor" << endl;
    }
};

void Student::setRollNumber(int r)
{
    roll_number = r;
}

void Student::getRollNumber()
{
    cout << "The roll number is : " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    Exam()
    {
        cout << "This is the Exam class Constructor" << endl;
    }
    void setMarks(float m1, float p1);
    void getMarks();
    ~Exam()
    {
        cout << "This is the Exam class Destructor" << endl;
    }
};

void Exam::setMarks(float m1, float p1)
{
    maths = m1;
    physics = p1;
}

void Exam::getMarks()
{
    cout << "Marks obtained in maths : " << maths << endl;
    cout << "Marks obtained in physics : " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    Result()
    {
        cout << "This is the Result Class Constructor" << endl;
    }
    void displayResult()
    {
        getRollNumber();
        getMarks();
        cout << "your percentage is : " << (maths + physics) / 2 << " % " << endl;
    }

    ~Result()
    {
        cout << "This is the Result Class Destructor" << endl;
    }
};

int main()
{
    cout << "this is about Multilevel Inheritance in c++ programming" << endl;
    Result harry;
    harry.setRollNumber(420);
    harry.setMarks(94, 90);
    harry.displayResult();
    return 0;
}


// kaun kb construct ho raha hai aur kb destroy ye bhi important hai

// note:-----------------
// if we are inheriting B from A and C from B (A----->B----->C)
// 1. A is the base class for B and B is the base class for C
// 2. A-----> B ------> C is called inheritance path