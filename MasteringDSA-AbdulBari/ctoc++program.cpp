#include <iostream>
using namespace std;
class rectangle{
public:
    int length;
    int breadth;
   void initialize(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    void change_length(int l)
    {
        length = l;
    }
};
int main()
{
    rectangle r;
    r.initialize(10,5);
    cout << "length is " << r.length << endl;
    cout << "breadth is " <<r.breadth<< endl;
     int a=r.area();
    cout << "area is " << a <<endl;
    r.change_length(20);
    cout << "change_length is " << r.length <<endl;

    return (0);
}