#include<iostream>
#include<string.h>
using namespace std;
void perm(char s[],int l,int h){
    int i;
    if(l==h){
        cout<<s<<endl;
    }
    else if{
    for(i=l;i<=h;i++){
        swap(s[l],s[i]);
        perm(s,l+1,h);
        swap(s[l],s[i]);
    }
}
}
int main(){

    char s[10]="ABC";
    int n=s.size();
    perm(s,0,n-1);
    return(0);
}