#include <iostream>
using namespace std;
class Personal_info
{
    int roll_no,tel_no,n;
    string name,class_div,dob,dl_no,add,blood_grp;
    public:
    Personal_info()
    {
        cout<<"Enter your name: "<<endl;
        cin>>name;
        cout<<"Enter your Roll_no: "<<endl;
        cin>>roll_no;
        cout<<"Enter your Class and Division: "<<endl;
        cin>>class_div;
        cout<<"Enter your Date of Birth: "<<endl;
        cin>>dob;
        cout<<"Enter your Blood Grp: "<<endl;
        cin>>blood_grp;
        cout<<"Enter your Address: "<<endl;
        cin>>add;
        cout<<"Enter your Driving licence no: "<<endl;
        cin>>dl_no;
        cout<<"Enter your Tel.No: "<<endl;
        cin>>tel_no;
    }
    void display()
    {
        cout<<name<<endl;
        cout<<roll_no<<endl;
        cout<<class_div<<endl;
        cout<<dob<<endl;
        cout<<blood_grp<<endl;
        cout<<add<<endl;
        cout<<dl_no<<endl;
        cout<<tel_no<<endl;
    }
    Personal_info(Personal_info &x)
    {
        this->name=x.name;
        this->roll_no=x.roll_no;
        this->class_div=x.class_div;
        this->dob=x.dob;
        this->blood_grp=x.blood_grp;
        this->add=x.add;
        this->dl_no=x.dl_no;
        this->tel_no=x.tel_no;

    }
    ~Personal_info()
    {
        cout<<"object is freed.";
    }

    friend class student;

};
class student
{
    Personal_info p;
    public:
    student(){
    p.name="abc";
    p.roll_no=30;
}

};
int main() 
{
    int n;
    cout<<"Case numnber: ";
    cin>>n;
    switch(n)
    {
        case 1:
        {
            cout<<"Default constructor"<<endl;
            Personal_info s;
            s.display();
        }
        break;
        case 2:
        {
            cout<<"copy constructor"<<endl;
            Personal_info s;
            Personal_info s1(s);
            s.display();
        }
        break;
        case 3:
        {
            cout<<"Dynamic memory"<<endl;
            student *st;
            cout<<"No of entries: ";
            cin>>n;
            st=new student[n];
            delete []st;
        }
        break;
        case 4:
        {
            cout<<"Invalid choice.";
        }
        break;
    }



    return 0;
}
