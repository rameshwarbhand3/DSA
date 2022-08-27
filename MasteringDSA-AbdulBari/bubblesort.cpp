#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[5] = {5, 2, 34, 56, 7};
    cout << "Array element are :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    int counter = 1;
    while (counter < n )
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
    cout << "Array after sorting :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }

    return (0);
}