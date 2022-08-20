#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
struct rectangle*fun(){
    struct rectangle *p;
    p=new rectangle;
   // p=(struct rectangle*)malloc(sizeof(struct rectangle));
   p->length=10;
   p->breadth=6;
    return (p);
}
int main(){
    struct rectangle*ptr=fun();
    cout<<"length is "<<ptr->length<<endl;
    cout<<"bredth is "<<ptr->breadth<<endl;
    return(0);
}
