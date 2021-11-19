#include <iostream>
using namespace std;
template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }

    // void display(){
    //     cout<<"the value of data is : "<<data<<endl;
    // }

    void display();
};

// ------------------------------------------------------------------------------------------------------------
// we can use scope resolution operator to define the function in template like below
template <class T>
void Harry<T>::display()
{
    cout << "the value of data is : " << data << endl;
}

// ----------------------------------------------------------------------------------------------------------------
void func(int a)
{
    cout << "i am first func() " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "i am templatised function " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "i am templatised function1 " << a << endl;
}

int main()
{
    cout << "this is about member function template and overloading template functions in c++ programming" << endl;
    // Harry<int>h(5);
    // cout<<h.data<<endl;
    // h.display();

    func(4);
    // the output is : i am first func() 4
    // note:----------- this is because in overloading function exact match highest priority leta hai..........(vvi)!
    // agar exact match available hai to pehle whi run krega , aur agar exact match available nhi h but bnaya jaa skta hai to wo
    // wla run kr jaayega ...........................!

    func1(4);
    return 0;
}

// note:----------- template function can be overloaded