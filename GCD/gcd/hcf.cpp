#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b){
           a= a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0){
        return b;
    }
    else{
        return a;
    }
}
int main(){
    int a=15;
    int b=35;
    cout<<" the gcd/hdc is : "<<gcd(a,b);
}