#include <iostream>
using namespace std;

int factorial_recursive(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}

int fibonacci_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}
int main()
{
    cout << " this is about recursion and recursive function in c++ programming " << endl;
    // factorial of a number
    int n;
    cout << "enter the number to find the factorial and fibonacci at  : ";
    cin >> n;
    cout << "the factorial of " << n << " is : " << factorial_recursive(n) << endl;
    cout << "the " << n << "th fibonacci number is  : " << fibonacci_recursive(n) << endl;
    return 0;
}