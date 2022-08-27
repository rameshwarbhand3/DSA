#include <iostream>
using namespace std;
//finding min element in unsorted array and swap it with element at begining.
int main()
{
    int n = 6;
    int arr[n] = {12, 45, 23, 51, 19, 8};
    cout << "Array element are :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "<<endl;
    }
    int temp;
    for (int i = 0; i < n -1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] > arr[i]){
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
}
cout<<"Array element after sort :"<<endl;
      for (int i = 0; i < n; i++)
    {
        cout <<arr[i] << " "<<endl;
    }
   
    

    return (0);
}