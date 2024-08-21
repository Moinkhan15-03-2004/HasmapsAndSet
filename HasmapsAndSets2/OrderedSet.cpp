#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    // set<int> s;
    // s.insert(5);
    // s.insert(3);
    // s.insert(4);
    // for(int ele : s){
    //     cout<<ele<<" ";// it print in ordered set
    // }
    map<int,int> m;
    m[2] = 20;
    m[3] = 30;
    m[1] = 10;
    for(auto x : m){
        cout<<x.first<<" ";// it print in ordered set 1 2 3
        cout<<x.second<<" ";
    }

}