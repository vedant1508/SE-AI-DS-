#include <iostream>
using namespace std;
class publication
{
    string title;
    float price;
    public:
    void getdata1()
    {
       cout<<"Enter the title of the Book: "<<endl;
       cin>>title;
       cout<<"Enter the price of the Book: "<<endl;
       cin>>price;
    }
    void display1()
    {
        cout<<"Title of the Book: "<<title<<endl;
        cout<<"Price of the Book: "<<price<<endl;
    }
};
class book:public publication
{
    int pgcount;
    public:
    void getdata2()
    {
        cout<<"Enter the page count: "<<endl;
        cin>>pgcount;
    }
    void display2()
    {
        cout<<"Page count: "<<pgcount<<endl;
    }
};
class tape:public publication
{
    float time;
    public:
    void getdata3()
    {
        cout<<"Enter the playing time of the Book: "<<endl;
        cin>>time;
    }
    void display3()
    {
        cout<<"Playing time: "<<time<<endl;
    }
};
int main() {
    book b;
    tape t;
    b.getdata1();
    b.getdata2();
    t.getdata3();
    b.display1();
    b.display2();
    t.display3();
    return 0;
}
