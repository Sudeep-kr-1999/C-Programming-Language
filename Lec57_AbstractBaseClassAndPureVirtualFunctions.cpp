#include <iostream>
#include <cstring>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }

    // this function is "do nothing function" or "pure virtual function" it may or may not have body we cannot give it body
    // directly here it will give error but if we give the body outside the classs using scope resolution operator then its fine body
    // will be assigned (very very important)
    virtual void display() = 0;
};

// This is the way how we can give the body to the pure virtual function
void CWH::display()
{
    cout << "this is a pure virtual function" << endl;
}

class CWHVideo : public CWH
{
    float videolength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }

    virtual void display()
    {
        CWH::display();
        cout << "this is a good video with title " << title << endl;
        cout << "this video has rating " << rating << " out of 5 stars" << endl;
        cout << "the length of this video is " << videolength << " minutes" << endl;
    }
};

class CWHVText : public CWH
{
    int words;

public:
    CWHVText(string s, float r, int wordcount) : CWH(s, r)
    {
        words = wordcount;
    }

    virtual void display()
    {
        cout << "this is a good video with title " << title << endl;
        cout << "this video has rating " << rating << " out of 5 stars" << endl;
        cout << "the number of words in this tutorial " << words << " words" << endl;
    }
};

int main()
{
    cout << "this is about abstract base class and pure virtual functions" << endl;
    string title;
    float rating, videolength;
    int words;

    // for code with harry video
    title = "this is django tutorial video";
    videolength = 4.56;
    rating = 4.89;
    CWHVideo djvideo(title, rating, videolength);
    // djvideo.display();

    title = "this is django tutorial text";
    words = 433;
    rating = 4.19;
    CWHVText djText(title, rating, words);
    // djText.display();

    // note:------------------ since saare function virtual hai to saare pointed derived class ke according call hoge
    CWH *tut[2];
    tut[0] = &djvideo;
    tut[1] = &djText;
    tut[0]->display();
    tut[1]->display();
    return 0;
}

// Rules for virtual function:---------
// 1. they cannot be static
// 2. they are accessed by object pointers(means we should use pointer to do all function calls)
// 3. virtual function can be a friend of another class
// 4. a virtual function in a base class might not be used .
// 5.if a virtual function define in the base class there is no necessity for redefining it in the derived class.
// 6.agar pointer ko derived class mein virtual function nhi dikhega to wo phir apne us class ke pass jaayega jiska wo pointer h!

// abstract base class:-----------------------
// 1. it is a type of class which must contains at least one virtual function
// // 2. derive class mein pure virtual function ko override krna hi padega compulsary hota h

// 3. basically abstract class ek aisa class hai jo dushre class ko help krta hai kuch methods ya function implement krne mein
// jo unke liye must hai aur wo waise function ko as pure virutal function rkhta hai . This is basically like a template ko ji
// har wo class ko use krna compulsary hai jo abstract base class ko inherit kr rhe h

// 4. note:------- we cannot create the object of abstract base class since hum use as a template bna rhe h dushre class ke liye
