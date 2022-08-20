#include <iostream>
using namespace std;
void fun(int A[], int n)
{
    A[1] = 10;
}
int main()
{
    int A[] = {2, 4, 6, 8, 5};
    int n = 5;
    fun(A, n);
    for (int x : A)
    {
        cout << x << endl;
    }
    return (0);
}