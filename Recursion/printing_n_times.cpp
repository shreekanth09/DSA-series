#include<iostream>
using namespace std;

// int names(){
//     string  s ="shreekanth";
//     cout<<s<<endl;                           //infinait name without condition
//     s+=1;
//     names();
// }
// int main(){
//     names();
// }
int print(int i, int n){
    if(i>n)
     return 0;
    cout<<"shreekanth"<<endl;             //definite name without for loop
    print(i+1,n);
    return 0;
}
int main(){
    int n=5;
    int i=1;
    print(i,n);
}