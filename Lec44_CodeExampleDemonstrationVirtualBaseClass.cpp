#include <iostream>
using namespace std;

/*
order of inheritance----------
Student--------> Test
Student---------> Sports
Test------------> Result
Sports----------> Result
*/

class Student
{
protected:
    int roll_no;

public:
    Student()
    {
        cout << "this is the constructor of the Student class" << endl;
    }

    ~Student()
    {
        cout << "this is the destructor of the Student class" << endl;
    }

    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number()
    {
        cout << "your roll number is : " << roll_no << endl;
    }
};

// vvi note:----------
// here we are inheriting Student class as public and virual class
// this can also be written as public virtual Student
class Test : virtual public Student
{
protected:
    float maths;
    float physics;

public:
    Test()
    {
        cout << "this is the constructor of the Test class" << endl;
    }

    ~Test()
    {
        cout << "this is the destructor of the Test class" << endl;
    }

    void set_marks(float m, float p)
    {
        maths = m;
        physics = p;
    }

    void print_marks()
    {
        cout << "your results is here : " << endl
             << "Maths : " << maths << endl
             << "Physics : " << physics << endl;
    }
};

// vvi note:----------
// here we are inheriting Student class as public and virual class
// this can also be written as public virtual Student
class Sports : public virtual Student
{
protected:
    float score;

public:
    Sports()
    {
        cout << "this is the constructor of Sports" << endl;
    }

    ~Sports()
    {
        cout << "this is the destructor of Sports" << endl;
    }

    void set_score(float sc)
    {
        score = sc;
    }

    void print_score()
    {
        cout << "Your pt score is : " << score << endl;
    }
};

class Results : public Test, public Sports
{
private:
    float total;

public:
    Results()
    {
        cout << "this is the constructor of the Result class" << endl;
    }

    ~Results()
    {
        cout << "this is the destructor of the Result class" << endl;
    }

    void display()
    {
        total = physics + maths + score;
        print_number();
        print_marks();
        print_score();
        cout << "your total score is : " << total << endl;
    }
};

int main()
{
    cout << "this is the domonstration about virtual base class in c++ programming" << endl;
    Results harry;
    harry.set_number(4200);
    harry.set_marks(78.9, 99.5);
    harry.set_score(9);
    harry.display();
    return 0;
}

// note:------ if we donot use virtual keyword  since 2 baar available ho jaayega to compiler confuse ho jaayege ki kha se lana
//             h exatly ya kiska function use mein lena hai and ek ambiguity error throw kr dega, ise hi prevent krne ke liye
//             hum virtual keyword use krke base class ko virtual declare kr dete h!