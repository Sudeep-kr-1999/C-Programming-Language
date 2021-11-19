#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter()
    {
        counter = 0;
    }
    void displayPrice();
    void setPrice();
};

void Shop ::setPrice()
{
    cout << "Enter the id of the item number " << counter + 1 << " : ";
    cin >> itemId[counter];
    cout << "Enter the price of the item number " << counter + 1 << " : ";
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Price of item with id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    cout << "object memory allcoation and arrays in classes" << endl;
    Shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();
    return 0;
}