#include<iostream>
using namespace std;
class diagonal{
  private:
    int *A;
    int n;
    public:
    diagonal(int n){
        this->n=n;
        A=new int[n];
    }
    ~diagonal(){
        delete[]A;
    }
     void set(int i,int j,int x);
     int get(int i,int j);
     void display();
};
void diagonal::set(int i,int j,int x){
if(i==j);
A[i-1]=x;
}
int diagonal::get(int i,int j){
    if(i==j);
    return A[i-1];
    return 0;
}
void diagonal::display(){
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          if(i==j);
          cout<<A[i]<<" ";
      }
      cout<<endl;
  }
}
int main(){
    diagonal d(4);
    d.set(1,1,2);
    d.set(2,2,4);
    d.set(3,3,5);
    d.set(4,4,6);
    d.display();
    return(0);
}