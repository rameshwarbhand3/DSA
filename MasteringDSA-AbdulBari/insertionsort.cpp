#include<iostream>
using namespace std;
//insert an element from unsorted array to its correct position in sorted array.
void insertionsort(int arr[],int n){
    int i,key,j;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        //key=unsorted part & j=sorted part;
        while(arr[j]>key && j>=0){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
int main(){
    int arr[]={12,45,23,51,19,8};

    int n=sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    cout<<endl;
    return(0);
}