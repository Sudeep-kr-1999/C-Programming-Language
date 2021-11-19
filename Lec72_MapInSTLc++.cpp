#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    cout << "this is about Map in STL in c++ programming" << endl;
    map<string, int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 59;
    marksMap["Rohan"] = 2;
    marksMap.insert({{"Sudeep", 99}, {"Vimal", 95}});
    // note:----------- (*iter).first--- iter mein jo first hoga in this case is key dega(pair ka pehla element here is key)
    //                  (*iter).second---iter mein jo second hoga in this case is value dega(pair ka dushra element here is value)

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << ":" << (*iter).second << endl;
    }

    cout << "the size is : " << marksMap.size() << endl;
    cout << "the max size is : " << marksMap.max_size() << endl;
    cout << "the empty's return value is " << marksMap.empty() << endl;
    return 0;
}

// note:------- Map is an associative array used to store key value pairs