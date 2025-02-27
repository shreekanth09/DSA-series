#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n, int key){
    int start = 0;
    int end = n-1;
    int mid =( start + end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
         end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int mian(){
    int arr[5]={1,5,12,15,30};
    // int n=5;
    // int key=12;
    int res=search(arr,5,15);
    cout<<"the ans is :"<<res<<endl;
    return 0;
}