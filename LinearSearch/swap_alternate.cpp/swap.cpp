#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int altswap(int arr[],int n){
    int temp;
    for(int i=0; i<n; i+=2){
     if(i+1<n){
        swap(arr[i],arr[i+1]);
        // temp=arr[i+1];
        // arr[i+1]=arr[0];
        // arr[0]=temp;         // ITS NOT WORKING
     }  
}
return 0;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int sz=5;
    int res=altswap(arr,sz);
    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
    // cout<<res;
    return 0;
}