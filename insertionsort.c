#include<stdio.h>
#include<stdlib.h>
void printarray(int *A,int n){
    for(int i=0;i<n;i++){
        printf("%d",A[i]);
    }
    printf("\n");
}
void insertionsort(int *A,int n){
    int key;int j;
for(int i=1;i<n-1;i++){
key=A[i];
j=i-1;
while(A[j]>key)
A[j+1]=A[i];
j--;
}

}