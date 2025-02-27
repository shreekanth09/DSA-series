#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int update(int arr[],int n){
    arr[0]=100;
    cout<<"inside the function"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
int main(){
    int arr[3]={10,20,30};
    int n=3;
    update(arr,n);
    cout<<"after"<<endl;
    for(int i=0; i<n; i++){     //IN THIS case main function arr also updates becose main function arr will  pass its address to the fucntion ,if we update the adress inside the funciotn it will aslo update inthe main fun also
        cout<<arr[i]<<" ";
    }
   
}