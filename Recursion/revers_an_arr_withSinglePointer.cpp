#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int revers(int i,int arr[],int n){
    if(i>=n/2) return 0;
    swap(arr[i],arr[n-i-1]);
    revers(i+1,arr,n);
    return 0;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;
    // int n;
    // int i=0;
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    
    revers(0,arr,n);
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}