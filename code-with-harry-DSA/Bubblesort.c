#include <stdio.h>
#include <stdlib.h>
void printarray(int *A, int n)
{
    int i;
    int j;
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
}
void bubblesort(int *A, int n)
{
    int temp;
    int i;
    int j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printarray(A, 6);
    bubblesort(A, 6);
    printarray(A, 6);
    return (0);
}