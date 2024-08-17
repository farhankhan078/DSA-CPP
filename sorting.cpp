#include <iostream>
using namespace std;
int main(){
    int a[5] = {3,5,4,1,2};
    int i,j,temp;
    cout<<"Elements are b4 sorting: ";
    for(i=0;i<5;i++){
        cout<<a[i]<<"\t";
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(a[i]<a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout<<"\nElments after sorting: ";
    for(i=0;i<5;i++){
        cout<<a[i]<<"\t";
    }
}