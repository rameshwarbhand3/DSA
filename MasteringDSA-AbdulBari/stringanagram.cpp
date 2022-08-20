#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char A[]="ramesh";
    char B[]="resham";
    int i,H[26]={0};
for(i=0;A[i]!='\0';i++){
    H[A[i]-97]+=1;
}
for(i=0;B[i]!=0;i++){
    H[A[i]-97]-=1;
}
if(H[A[i]-97]<0){
    cout<<"string is  anagram"<<endl;
   
}
if(B[i]=='\0'){
    cout<<"string is not anagram"<<endl;
}
return(0);
}