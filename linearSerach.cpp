#include <iostream>
using namespace std;
int main(){
    int a[10],n,i,x;
    cout<<"Enter Size of Array: ";
    cin>>n;
    cout<<"Enter Elements: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Elements are: ";
    for(i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    cout<<"\nEnter element to search: ";
    cin>>x;
    for(i=0;i<n;i++){
        if(a[i]==x){
            cout<<"Element Found: ";
            break;
        }
    }
    if(i==n){
        cout<<"Element not found, Try again";
    }
    return 0;
}