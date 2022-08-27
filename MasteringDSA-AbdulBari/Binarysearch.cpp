#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    return -1;
}

int main()
{
    int n = 5;
    int arr[5]={5, 2, 34, 56, 7};
    cout << "Array element are :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    int key = 34;
    cout << "The key found at index: " << endl;
    cout << binarysearch(arr, n, key) << endl;
    return (0);
}