#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int *A,n,ch,x,i,j;
    cout<<"Enter dimension"<<endl;
    cin>>n;
    A= (int*)malloc(n*sizeof(int));
    do{
        switch(ch){
            case 1:for(i=1;i<=n;i++){
                cout<<A[i-1]<<endl;
                break;
            }
            case 2:
            cout<<"Enter indices"<<endl;
            cin>>i>>j>>endl;
            if(i==j){
                cout<<A[i-1]<<endl;
            }
            else{
            cout<<0<<endl;
            }
            break;
            case 3:
            cout<<" Enter row,col and element "<<endl;
            cin>>"i">>"j">>x;
            if(i==j){
                A[i-1]=x;
            }
            break;
case 4:
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(i==j){
            cout<<A[i-1]<<endl;
        }
        else cout<<0<<endl;
    }
}
break;
}while(i<=n && j<=n);

return(0);
    }





