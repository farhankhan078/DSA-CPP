#include <iostream>
using namespace std;
int main()
{
    int arr[100], n, i, x;

    cout << "Enter size of an array: ";
    cin >> n;

    cout << "Enter elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element to add at the end: ";
    cin >> x;

    arr[i] = x;
    n++;
    cout << "New elements are: \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}