#include <iostream>
using namespace std;

int main()
{
    cout << "this is about loops in c++" << endl;

    // there are 3 types of loops in c++
    // 1.for loops
    // 2. while loops
    // 3. dowhile loops
    // int i;
    // for (i=0;i<=100;i++){
    //     cout<<i<<endl;
    // }

    // int j=1;
    // while(j<=40){
    //     cout<<j<<endl;
    //     j++;

    // }

    int k = 1;
    do
    {
        cout << k << endl;
        k++;
    } while (k <= 40);

    return 0;
}