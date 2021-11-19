#include <iostream>
using namespace std;
class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }

    void getData()
    {
        cout << "the id of this object is : " << id << endl;
        cout << "the price of this object is : " << price << endl;
    }
};
int main()
{
    cout << "it is about array of objects using pointer in c++ programming" << endl;
    int size = 3;
    int p;
    float q;

    // general_store item
    // veggies item
    // hardware item

    ShopItem *ptr = new ShopItem[size];

    // since nihe for loop mein ptr pointer aage chla jaayega to print krne ke liye hume shi pointer nhi milega isliye hum use
    // ptrtemp mein store kr ke rkhege taaki hume starting address pta ho aur print krne mein koi problem n aaye
    ShopItem *ptrtemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "enter id of item " << i + 1 << " : ";
        cin >> p;
        cout << "enter price of item " << i + 1 << " : ";
        cin >> q;
        cout << endl;
        ptr->setData(p, q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "the details of item " << i + 1 << " :" << endl;
        ptrtemp->getData();
        cout << endl;
        ptrtemp++;
    }

    return 0;
}