#include<iostream>
#include<array>
using namespace std;
int main(){
array<int,4> a={1,2,3,4};
int size=a.size();
for(int i=0; i<size; i++){
    cout<<a[i]<<endl;
}
cout<<"at 2 index :  "<<a.at(2)<<endl;
cout<<"empty or not: "<<a.empty()<<endl;

}