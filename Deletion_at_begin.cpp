#include<iostream>
using namespace std;
int main()
{
    int a[50],n,i,x;
    cout<<"Enter size of an array: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Before Deletion: ";
    for(i = 0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    
    for(i=0;i<n-1;i++)
    {
      a[i]=  a[i+1];
    }
   n--;

   cout << "\nAfter Deletion: ";
    if (n == 0) {
        cout << "Array is empty after deletion." << endl;
    } else {
        for(i = 0; i < n; i++) {
            cout << a[i] << "\t";
        }
    }

return 0;
}