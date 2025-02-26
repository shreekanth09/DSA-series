// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int num(int n){
//     int lastdigit=0;
//     int count=0;
//     while(n>0){
//         lastdigit=n%10;
//         count=count+1;
//         count=n/10;
       
//     }
//     return lastdigit;
// }
// int main(){
//     int n=1230;
//     cout<<"the nums are : "<<num(n)<<endl;
// }



//it is not the problem



 #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int renum(int n){
    int revers=0;
    int lastdigit;
    while(n>0){
         lastdigit=n%10;
        n=n/10;
        revers=(revers*10)+lastdigit;
    }
    return revers;
}
int main(){
    int n=12034500;
    cout<<"the revers order: "<<renum(n)<<endl;
}