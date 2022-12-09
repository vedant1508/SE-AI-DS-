#include <iostream>
using namespace std;
class Complex
{
    float real,img;
    public:
    Complex()
    {
        real=0;
        img=0;
    }
    Complex(int x,int y)
    {
        real=x;
        img=y;
    }
    Complex add(Complex);
    Complex mul(Complex);
    void display()
    {
        cout<<" Addition of the complex number: "<<real<<"+i"<<img;
    }
    void display1()
    {
        cout<<" \nMultiplication of the complex number: "<<real<<"+i"<<img;
    }     
};
Complex Complex::add(Complex X)
{
    Complex temp;
    temp.real=real+X.real;
    temp.img=img+X.img;
    
    return temp;
}
Complex Complex::mul(Complex X)
{
    Complex temp;
    temp.real=(real*X.real-img*X.img);
    temp.img=(real*X.img+X.real*img);
    return temp;
}
int main() {
  Complex c3;
  int m,n;
  cout<<"Enter the real and imagnery part of 1st number:"<<endl;
  cin>>m>>n;
  Complex c1(m,n);
  cout<<"Enter the real and imagnery part of 2nd number:"<<endl;
  cin>>m>>n;
  Complex c2(m,n);
  c3=c1.add(c2);
  c3.display();
  c3=c1.mul(c2);
  c3.display1();
    return 0;
}
