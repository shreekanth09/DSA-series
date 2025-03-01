#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findUniq(int arr[],int sz){
    int ans=0;
    for(int i=0; i<sz; i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[5]={1,2,3,1,2};
    int size=5;
    int res=findUniq(arr,size);
    cout<<"the unique value is : "<<res<<endl;
    return 0;
}
//finding the uniquee value in the array
//the array should be odd