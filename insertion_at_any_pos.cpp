#include <iostream>
using namespace std;
int main()
{
    int arr[50], n, i, pos, x;
    cout << "Enter size of an array: ";
    cin >> n;
    cout << "Enter array elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter a position to store an element: ";
    cin >> pos;
    cout << "Enter element: ";
    cin >> x;

    for (i = n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = x;
    n++;
    cout << "New elements are: \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}