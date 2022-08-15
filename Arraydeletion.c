#include<stdio.h>
void display(int arr[],int n){
for(int i=0;i<n;i++){
printf("%d\n",arr[i]);
}
}
void inddeletion(int arr[],int size,int element,int index){
for(int i=index;i<size-1,i++){
arr[i+1]=arr[i];
}
}
int main(){
int arr[100]={7,8,12,27,88};
int size=5,element=45,index=0;
display(arr,size);
inddeletion(arr,size,index,element);
size-=1;
display(arr,size);
return(0);
}
-------------------------------------------------------------------------
#include<stdio.h>
void dispaly(int arr[],int n){
for(int i=0;i<n;i++){
printf("%d\n",arr[i]);
}
}
void inddeletion(int arr[],int size,int element,int index){
for(int index;i<size-1;i++){
arr(i+1)=arr[i];
}
}
int main(){
int arr[100]={7,8,12,27,88};
int size=5;element=45;index=0;
display(arr,size);
inddeletion(arr size,index,element);
size-=1;
display(arr,size);
return(0);
}

