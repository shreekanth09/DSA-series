#include<bits/stdc++.h>
using namespace std;
int largest(int arr[],int n){
    int larg=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>larg)
        larg=arr[i];
    }
    return larg;
}
int main(){
    int arr[5]={1,10,4,12,5};
    int n=5;
    int res=largest(arr,n);
    cout<<"the largest num is: "<<res;
}