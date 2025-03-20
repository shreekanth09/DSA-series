#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,24,5,78,9};
    // vector<int >v2(v);
    // v.push_back(9);
    // v.push_back(9);
    //                                           //vector in pairs
    // vector<pair<int,int>>p;
    // p.push_back({1,2});
    // p.emplace_back(3,5);
    // // cout<<"size is : "<<v.size()<<endl;
    // for(int i:v2){
    //     cout<<" "<<i;
     //}


    //acessing the vectors in STL
    vector<int >::iterator it = v.begin();   //iterator used to point to the memonry adress ,where the element is stored
    it++; //it is used to print the 1st index[24] of a vector
    // it++;
    // it=it+2;    
    // cout<<*(it)<<" ";     //here * is used to accesing the element inside the memory

     //USING LOOP IN STL 
    //here we use AUTO it means it is assign a  vector or datatype
    // for(auto it = v.begin(); it != v.end(); it++){
    //     cout<<*(it)<<" ";
    // }

                                              //USING FOR LOOP
    // for(auto it:v){
    //     cout<<it<<" ";
    // }


                                                     //deletion in vector
    // v.erase(v.begin() + 1);
    //  for(auto it:v){
    //     cout<<it<<" ";
    // }

                                                 //deleting multiple elements
    // v.erase(v.begin()+1,v.begin()+3);
    // for(auto it:v){
    //     cout<<it<<" ";
    // }



                                                         //inseting an element
    // v.insert(v.begin()+4,1);
    // for(auto it:v){
    //     cout<<it<<" ";
    // }
        
                                          //inserting multiple elements
     v.insert(v.begin()+1,5,10);  //here 1 is in which index we want to insert ,5 is how my time we have to insert
      for(auto it:v){             // and 10 is the element ,which want to insert
        cout<<it<<" ";
    }                                     

    }
