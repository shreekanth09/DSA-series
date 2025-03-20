// 1] set is used to store the uniq elements if the size of set is 5 we enterd all the elements are 5 the it shows only one 5
// 2] if you put  the elements in randomly  it makes it sorted ex you gave 3,5,7,1 the it returns 1,3,5,7
// 3] it doesnt print same element twice ex input 1,2,2,3,1 output: 1,2,3
// 4] modification is not allowed ex you add an element you cant modify it
//5] we also have un order set ,it is slow compair to set and it returns ranomly not in sorted way
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(1); // here we cant use push or pop, and front or back
    s.insert(1);
    s.insert(4); //here we added same elements multiple times but it print it only one time
    s.insert(4);
    s.insert(10);
    s.insert(0);
    for(int i:s){
        cout<<i<<" "<<endl;
    } cout<<endl;

    set<int>::iterator it =s.begin(); it++;// it used to delete 1 index not 0 index element
    s.erase(it);
    for(int i:s){
        cout<<i<<" "<<endl;
    }
    cout<<"if element is present then 1 else 0: "<<s.count(0)<<endl;
    set<int>::iterator itr=s.find(4);
    // cout<<"value: "<<*itr<<endl; //*itr used to print
  //the out put is 3(index valu) ,why 3 ,becouse after erase funciton there will be 2nd index aste ,so find valu 
  // is not in that set the it create extra index


  for(auto it=itr;it!=s.end(); it++){//it print 4 and after 4 for conclusion you can se in output
    cout<<*it<<" ";
  }
}