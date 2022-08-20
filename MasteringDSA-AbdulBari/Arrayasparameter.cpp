#include <iostream>
using namespace std;
void fun(int A[], int n)
{
    int i;
    printf("Array element are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d \n", A[i]);
    }
}
int main()
{
    int A[5] = {2, 4, 6, 7, 8};
    fun(A, 5);

    return (0);
}