#include<iostream>
using namespace std;
int area(int length,int breadth){
    return length*breadth;
}
int perimeter(int length,int breadth){
    int p;
    p=2*(length+breadth);
    return p;
}
int main(){
    int length;
    int breadth;
    cout<<"Enter the length and breadth "<<endl;
    cin>>length>>breadth;
    int a=area(length,breadth);
    int peri=perimeter(length,breadth);
    cout<<"area is "<<a<<endl;
    cout<<"perimeter is"<<peri<<endl;
    return(0);
}