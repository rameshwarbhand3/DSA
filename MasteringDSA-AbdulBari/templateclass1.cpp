#include<iostream>
using namespace std;
class arithmetic{
    private:
    int a;
    int b;
    public:
    arithmetic(int a,int b);
    int add();
    int sub();
};
arithmetic::arithmetic(int a,int b){
    this->a=a;
    this->b=b;
}
int arithmetic::add(){
    int c;
    c=a+b;
    return c;
}
int arithmetic::sub(){
    int c;
    c=a-b;
    return c;
}
int main(){
    arithmetic ar(10,5);
    cout<<"Addition is "<< ar.add()<<endl;
    cout<<"substraction is "<<ar.sub()<<endl;
    return(0);
}