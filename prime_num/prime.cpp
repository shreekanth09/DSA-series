#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int prime(int n){
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cnt++;
        }
       
    }
     if(cnt==2){
            cout<<"its a prime num"<<endl;
        }
        else{
            cout<<"its not prime num"<<endl;
        }
    return 0;
}
int main(){
    int n=7;
    prime(n);
}