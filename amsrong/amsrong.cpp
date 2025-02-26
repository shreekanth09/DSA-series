
 #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=371;
    int dup=n;
    int sum=0;
    
    int ld;    //ld=lastdigit
    while(n>0){
         ld=n%10;
        
        sum=sum+(ld*ld*ld);
        n=n/10;
       
    }
   if(sum==dup){
    cout<<"it is amstron num"<<endl;
   }
   else{
    cout<<"its not"<<endl;
   }
}
 // defintation of amstrong num is    ex 1 : 371=3(pow(3)) +7pow(3)+1pow(3) = sum=371 so its an amstorn 
 //  ex 2 : 73= 7pow(3)+3pow(3) != sum 73 so it is not amsrong no  