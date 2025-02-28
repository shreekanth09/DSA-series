#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// int sum(int n,int s){     //sum of n numbers with out using for ,we used here recursion function
//     if(n<1){
//         cout<<s<<endl;
//         return 0 ;
//     }
//     sum(n-1,s+n);
//     return 0;
// }
// int main(){
//     int n=6;
//     int s=0;
//     sum(n,s);
// }

//onther mathod

int sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}
int main(){
    int n=4;
   cout<< sum(n)<<endl;
}