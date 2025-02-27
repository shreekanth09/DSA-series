#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Sum(int arr[],int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum = sum+arr[i];
    }
    // cout<<"sum= "<<sum<<endl;
    return sum;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int sum=0;
   int res= Sum(arr,n);
// for(int i=0; i<n; i++){
//     sum=sum+arr[i];
// }
   cout<<"the sum= "<<res<<endl;
// cout<<"sum is : "<<sum<<endl;
    return 0;

}