#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fingind(int i,int n){
     if(i<1){
        return i;
     }
     cout<<i<<" ";
     fingind(i-1,n);          //printing n-1 (revers order)
}
int main(){
    int n=5;
    fingind(n,n);
}