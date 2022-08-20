#include<iostream>
using namespace std;
int main(){
    int length;
    int breadth;
    cout<<"Enter the length "<<endl;
       cin>>length;
    cout<< "Enter the breadth " <<endl; 
 cin>>breadth;
    int area=length*breadth;
    int peri=2*(length+breadth);
    cout<<"Area is "<<area<<endl;
    cout<<"perimeter is "<<peri<<endl;
    return(0);
}