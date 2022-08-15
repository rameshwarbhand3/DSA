#include<stdio.h>
#include<stdlib.h>
void printarray(int *A,int n){
    for(int i=0;i<n;i++){
        printf("%d\n",A[i]);
    }
    printf("\n");
}
void selectionsort(int*A,int n){
    int indexofmin;int temp;
    printf("Running selection sort\n");
    for(int i=0;i<n-1;i++){
indexofmin=0;
for(int j=i+1;j<n;j++){
if(A[j]<A[indexofmin]);
indexofmin=j;
}
temp=A[i];
A[i]=A[indexofmin];
A[indexofmin]=temp;
 }
}
int main(){
    int A[]={3,5,2,13,12};
    int n=5;
    printarray(A,n);
    selectionsort(A,n);
    printarray(A,n);
    return(0);
}