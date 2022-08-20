#include<iostream>
using namespace std;
struct matrix{
    int A[10];
    int n;
};
void set(struct matrix *m,int i,int j,int x){
if(i=j);
m->A[i-1]=x;
}
int get(struct matrix m,int i,int j){
    if(i==j){
    return m.A[i-1];
    }
    else {
    return 0;
    }
}
void display(struct matrix m){
    int i, j;
    for(i=0;i<m.n;i++){
        for(j=0;j<m.n;j++){
            if(i==j){
            cout<<" "<<m.A[i]<<endl;
        }
            else{
            cout<<0<<endl;
            }
        }
    cout<<endl;
    }
}
int main(){
    struct matrix m;
    m.n=4;
    get(m,2,3);
    set(&m,1,1,5);set(&m,2,2,5);set(&m,3,3,5);set(&m,4,4,5);
    display(m);
}