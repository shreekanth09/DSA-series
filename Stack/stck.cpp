//it is, Last in first out
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("shreekanth");          //not here we cant use push_bofor or after methods we only use push and pop
    s.push("shiva");
    cout<<"top element: "<<s.top()<<endl;
    s.pop();
     cout<<"top element: "<<s.top()<<endl;
    cout<<"size of stack: "<<s.size()<<endl;
    cout<<"empty or not:  "<<s.empty()<<endl;


    //we can also use swap operations also
    stack<string>st1;
    s.swap(st1);
}
       