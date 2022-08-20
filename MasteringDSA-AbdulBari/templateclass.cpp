#include<iostream>
using namespace std;
class arithmetic{
    private:
    int a;
    int b;
    public:
    arithmetic(int A,int B){
        this->a=A;
        this->b=B;
    }
    int add(){
        int c;
        c=a+b;
        return c;
    }
    int sub(){
        int c;
        c=a-b;
        return c;
    }
};
int main(){
    arithmetic ar(10,5);
    cout<<"Addition is "<<ar.add()<<endl;
    cout<<"substraction is "<<ar.sub()<<endl;
    return(0);
}