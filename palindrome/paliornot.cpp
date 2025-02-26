#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=121;
    int dup=n;
    int revers=0;
    int lastdigit;
    while(n>0){
         lastdigit=n%10;
        n=n/10;
        revers=(revers*10)+lastdigit;
    }
     if(dup==revers){
        cout<<"yes it is ! "<<endl;
     }
     else{
        cout<<"flase"<<endl;
     }
}
