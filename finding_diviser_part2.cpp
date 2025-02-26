#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int diviser(int n){
    int sum=0;
    // vector<int> ls;
    for(int i=1; i<=n; i++){
        if(n%i==0){
        //   cout<<i;
          sum+=1;
        }
    }
  cout<<"diviser is : "<<sum;
}
int main(){
    int n=8;
    diviser(n);
}
     //the program is how many numbers can dived the n(for ex 8)  