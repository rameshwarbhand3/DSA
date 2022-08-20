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
int perimeter(struct rectangle r)
{
    int p;
    p = 2 * (r.length + r.breadth);
    return p;
}
int main()
{
    struct rectangle r = {0, 0};
    int l, b;
    cout << "Enter the length " << r.length << endl;
    cout << "Enter the breadth " << r.breadth << endl;
    cin >> l >> b;
    initialize(&r, l, b);
    int a = area(r);
    cout << "Area is " << a << endl;
    int peri = perimeter(r);
    cout << "perimeter is " << peri << endl;
    return (0);
}