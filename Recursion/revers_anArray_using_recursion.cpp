#include<iostream>
using namespace std;
int revers(int l,int r,int arr[]){
    if(l>r){
        return 0;
    }
    swap(arr[l],arr[r]);
    revers(l+1,r-1,arr);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int l=0;
    int r=4;
    revers(l,r,arr);
    for(int i=0; i<n; i++ ){
        cout<<arr[i]<<" ";
    }
   
}