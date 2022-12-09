#include <iostream>
#include <fstream>
using namespace std;
class student
{
	public:
	string name;
	void getdata()
	{
		cout<<"Enter the name: ";
		cin>>name;
	}
	void display()
	{
		cout<<name;
	}
};
		
int main() {
 
  student s;

  fstream file;
  file.open("a.txt",ios::out);
  s.getdata();
  file<<s.name;
 
  
 
  
  file.close();
  
  char ch;
  file.open("a.txt",ios::in);
  file>>ch;
  while (!file.eof())
  {
  
  cout<<ch;
  file>>ch;
 }
   file.close();
    return 0;
}
