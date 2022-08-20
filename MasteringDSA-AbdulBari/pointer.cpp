#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle r = {10, 5};
    r.length = 10;
    r.breadth = 5;
    cout << r.length << endl;
    cout << r.breadth << endl;
    struct rectangle *p;
    p = &r;
    p->length = 10;
    p->breadth = 5;
    cout <<p->length << endl;
    cout << p->breadth << endl;

    return (0);
}