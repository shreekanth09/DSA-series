#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int finding(int n){
     int lastdigit=(int)(log10(n)+1);
   //  int ctn=0;
   //  while(n>0){
   //    ctn=ctn+1;    //onther way of finding counts
   //    n = n / 10;
   //  }
   //  return ctn;
   return lastdigit;
    
 }
 int main(){
    int n=101;
   //  int n=5;
    cout<<"num ars : "<<finding(n)<<endl;

 }
 //