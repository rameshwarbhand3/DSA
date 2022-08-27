#include <iostream>
using namespace std;
int linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n=5, i;
    int arr[n]={38,28,49,10,25};
 
    cout << "Array element are :" << endl;
   
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    int key=25;
    cout << "key is found at index :" << linearsearch(arr, n, key) << endl;

    return (0);
}