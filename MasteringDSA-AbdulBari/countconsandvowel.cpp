#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[300];

   
   int vowel=0,consonant=0;
   cout<<"Enter a string "<<endl;
   cin>>str;
   int i;
   int len=strlen(str);
   for(i=0;i<len;i++){
       if(str[i]=='a' || str[i]=='A'
       || str[i]=='e' || str[i]=='E'
       || str[i]=='i' || str[i]=='I'
       || str[i]=='o' || str[i]=='O'
       || str[i]=='u' || str[i]=='U'){
           vowel++;
       }
       else if((str[i]>='a' && str[i]<='z')|| (str[i]>='A' && str[i]<='Z')){
           consonant++;
       }
   }
cout<<"vowel= "<<vowel<<endl;
cout<<"consonant= "<<consonant<<endl;
    
return(0);
}