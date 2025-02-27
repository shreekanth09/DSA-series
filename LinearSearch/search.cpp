#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int size,int target){
    for(int i=0; i<size; i++){
          if(arr[i]==target){
              return i;
          }
    }
   return -1;
}
int main(){
    int arr[]={1,2,19,4,10,6};
    int size=6;
    int target=6;
   cout<< linearSearch(arr,size,target)<<endl;
    return 0;
}
//it search the target values index if we enter the value that not present in the arr then it returns -1