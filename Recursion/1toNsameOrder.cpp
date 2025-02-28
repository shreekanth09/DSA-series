#include<iostream>
using namespace std;
int oneton(int i,int n){
    if(i>n) return 0;
    cout<<i;
    oneton(i+1,n);
}
int main(){
    int n=4;
    int i=1;
    oneton(i,n);
}