#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int diviser(int n){
    int sum=0;
    vector<int> ls;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
        // cout<<"dividers are: "<<i<<endl;
        ls.push_back(i);
        // sum+=i;
        
        if(n/i!=i){
            ls.push_back(n/i);
        }
        }

    }
    // return sum;
    sort(ls.begin(),ls.end());
    for(auto it:ls) cout<< it<<" ";
    return 0;
}
int main(){
    int n=36;
    diviser(n);
//    cout<< diviser(n)<<endl;
}