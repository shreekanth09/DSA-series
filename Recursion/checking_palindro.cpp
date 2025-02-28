#include<iostream>
using namespace std;
// char palin(char i,int n,char arr[]){
//     int dup=arr[i];
//     if(i>=n) return 0;
//     swap(arr[i],arr[n]);
//     palin(i+1,n-1,arr);
//     if(dup==arr[i]) cout<<" true"<<endl;
//     else cout<<"false"<<endl;
// }
// int main(){
//     char arr[]="shree";
//     int n=5;
//     palin(0,n,arr);
//     for(int i=0; i<=n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

bool palin(int i , string &arr){
    if(i>=arr.size()/2)  return true;
    if(arr[i]!=arr[arr.size()-i-1]) return false;
     return palin(i+1,arr);  
}
int main(){
    string arr="madam";
    // int n=10;
    cout<<palin(0,arr);
   return 0;
}