#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
void fun(struct rectangle *p){
    cout<<"length "<<p->length<<endl;
    cout<<"breadth "<<p->breadth<<endl;
}
void fun1(struct rectangle *r1){
    cout<<"perimeter of rectangle is "<<(r1->length+r1->breadth+r1->length+r1->breadth) << endl;
}
int main(){
    struct rectangle r ={10,5};
    struct rectangle r1={10,5};
    fun(&r);
    fun1(&r1);
    cout<<"Area of rectangle is "<< r.length*r.breadth<<endl;
    return(0);
}