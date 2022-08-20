#include<iostream>
#include<stdio.h>
using namespace std;
void swap(int a,int b){
    int temp;
     temp =a;
    a=b;
    b=temp;
}
int main(){
    int x =5;
    int y=4;
    swap(x,y);
    cout<<"swap x and y is"<<x<<y<<endl; 
    return (0);
    
}