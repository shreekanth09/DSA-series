#include<iostream>
using namespace std;
int backTraking(int i,int n){
  if(i<1) return 0;
  backTraking(i-1,n);  //challenge dont use ++
  cout<<i<<" ";
}
int main(){
    int n=3; //out put =1,2,3
    backTraking(n,n);
}