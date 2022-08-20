#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
void initialize(struct rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}
int area(struct rectangle r)
{
    return r.length * r.breadth;
}
void change_length(struct rectangle *r, int l)
{
    r->length = l;
}
int main()
{
    struct rectangle r;
    initialize(&r, 10, 5);
    cout<<"length is "<<r.length<<endl;
    cout<<"breadth is "<<r.breadth<<endl;
    area(r);
    cout<<"area of rectangle is "<<r.length*r.breadth<<endl;
    change_length(&r, 20);
    r.length=20;
    return (0);
}