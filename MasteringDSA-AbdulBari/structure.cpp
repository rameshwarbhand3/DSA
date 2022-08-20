#include<iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle r1 = {10, 5};
    r1.length = 10;
    r1.breadth = 5;
    cout << r1.length << endl;
    cout << r1.breadth << endl;
    return (0);
}
