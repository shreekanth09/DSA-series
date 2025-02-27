#include<iostream>
using namespace std;
int sumof(int arr[],int sz){
    int sum=0;
    for(int i=0; i<=sz; i++){
      sum=sum+arr[i];
    }

 return sum;
}
int main(){
    int arr[]={10,20,5,4,3};
    int sz=5;
    int sum=0;
   int myself= sumof(arr,sz);
   for(int i=0; i<=sz; i++){
      sum=sum+arr[i];
    }
  // cout<<;
  return 0;

}