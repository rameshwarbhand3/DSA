#include<stdio.h>

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int num1;
    int num2;
    num1 = 10;
    num2 = 5;
    swap(num1, num2);
 printf(" first number is %d\n",num1);
 printf("second number is %d\n",num2);
 return(0);

}