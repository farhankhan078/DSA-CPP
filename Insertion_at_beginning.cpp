#include <iostream>
using namespace std;
int main()
{
    int a[10], n, i,x;
    cout << "Enter no. of element: ";
    cin >> n;
    cout << "Enter array elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter element at Beginning: \n";
    cin >> x;

    for (i = n; i > 0; i--)
    {
    
        a[i] = a[i - 1];
    }
    a[0] = x;
    n++;
    cout << "New Array Elements are: ";
    for (i = 0; i < n; i++)
    {
        cout << a[i]<<"\t";
    }
    return 0;
}