#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    // pair<int,int>p;
    // p.first = 1;
    // p.second = 6;
    // cout<<p.first<<" "<<p.second;
    unordered_map<string,int>m;// create map
    pair<string,int>p1;
    p1.first = "raghav";
    p1.second = 76;
    pair<string,int>p2;
    p2.first = "harsh";
    p2.second = 67;
    pair<string,int>p3;
    p3.first = "lokesh";
    p3.second = 47;
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }


}