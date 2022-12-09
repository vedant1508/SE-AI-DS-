/* WAP for function template user choice ....
1.buuble sort 2.selection sort 3. shell sort */
#include <iostream>
using namespace std;

template <class T>
class Sorting 
{
    public :
    T a[100];
    int i,j,temp,min,n;
    void bubblesort();
    void selectionsort();
    void shellsort();
    void Insert_array();
};
template <class T> void Sorting<T>::Insert_array()
{
    cout<<"Enter the no. of entries:";
    cin>>n;
     for (int i=0;i<n;i++)
    {
            cin>>a[i];
    }
}
template <class T> void Sorting<T>::selectionsort()
{
    for(int i=0;i<n;i++)
            {
                
                for(int j=i+1;j<n;j++)
                {
                    if (a[i]>a[j])
                    {
                        
                        int temp = a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
                
                
                
            }
    cout<<"Sorted Array by selection sort is as follows :"<<endl;
    for (int i=0;i<n;i++)
    {
            cout<<a[i]<<endl;
    }
    
}
template <class T> void Sorting <T>::bubblesort()
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    
    cout<<"Sorted Array by Bubblesort is as follows :"<<endl;
    for (int i=0;i<n;i++)
    {
            cout<<a[i]<<endl;
    }
    
}
int main() 
{
    
    Sorting <int> S1;
    Sorting <float> S2;
    int ch;
    cout<<"1.Integer Sorting\n2.Float Sorting"<<endl;
    cout<<"Enter your Choice : "; 
    cin>>ch;
    switch (ch)
    {
        case 1 :
        {
        S1.Insert_array();
        S1.bubblesort();
        S1.selectionsort();
        break;
        }
        case 2:
        {
        S2.Insert_array();
        S2.bubblesort();
        S2.selectionsort();
        
        break;
        }
        
    }
    
    return 0;
}
