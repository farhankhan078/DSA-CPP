#include <iostream>
using namespace std;
int main()
{
    int a[20],n,i,x;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter Array Elements: ";
    for(i = 0; i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Before deletion: ";
    for(i = 0; i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    n--;
    cout<<"\n\nAfter deletion: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\n\nEnter an element to add at the end: ";
    cin>>x;
    a[i] = x;
    n++;
    cout<<"\nAfter adding another element: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
return 0;
}