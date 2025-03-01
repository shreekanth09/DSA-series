#include<bits/stdc++.h>
using namespace std;
int smallest(int arr[],int n){
    int small=INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<small) 
        small=arr[i];
    }
    return small;
}
int main(){
    int arr[5]={1,0,-1,4,10};
    int n=5;
    int res=smallest(arr,n);
    cout<<"the smallest num is : "<<res;
}