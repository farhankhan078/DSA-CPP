#include <iostream>
using namespace std;
int a[20], i, n, x;
int BinarySearch(int low, int high)
{
    
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (a[mid] == x)
        {
            return mid;
        }
        else if (a[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    cout << "Enter Size of array: ";
    cin >> n;
    cout << "Enter Elements in  Ascending order: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter elements to search: ";
    cin >> x;
    int result = BinarySearch(0, n - 1);
    if (result == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at: " << result;
    }
return 0;
}