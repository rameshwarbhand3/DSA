#include<iostream>
#include<string.h>
using namespace std;
int main(){
   char str[20];
   int i,length;
   int flag=0;
   do{
   cout<<"Enter a string: "<<endl;
   cin>>str;
   length=strlen(str);
   for(i=0;i<length;i++){
       if(str[i]!=str[length-i-1]){
           flag=1;
           break;
       }
   }
  

   if(flag){
       cout<<" string is not palindrome"<<endl;
   }
   else{
       cout<<" string is  palindrome"<<endl;
   }
    }while(str[length]!='\0');
   return(0);
}