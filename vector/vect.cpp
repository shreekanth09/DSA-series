#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5,1);// intitializing here 5=size and 1=all elements are 1;

    // for(int i:v){
    //     cout<<i<<endl;
    // }

    vector<int> last(v);  //coping vecter v into vector last
    for(int i:last){
        cout<<i<<" ";
    }
    // v.push_back(1);
    // cout<<"capacity: "<<v.capacity()<<endl;
    //  v.push_back(3);
    // cout<<"capacity: "<<v.capacity()<<endl;
    //  v.push_back(5);
     
    // cout<<"capacity: "<<v.capacity()<<endl;
    

    // cout<<"second index is: "<<v.at(2)<<endl;
    // for(int i:v){
    //     cout<<i<<" ";
    // }cout<<endl;
    // v.pop_back();
    // for(int i:v){
    //     cout<<i<<" ";
    // }cout<<endl;
    // vector<int,3> v={1,2,3};

}