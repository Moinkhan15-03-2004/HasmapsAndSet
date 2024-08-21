#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
unordered_map<string,int>m;
//   pair<string,int>p1;
//   p1.first = "raghav";
//   p1.second = 76;
//     m.insert(p1);
    // short form use like this 
    m["raghav"] = 15; // this is short form 
  pair<string,int>p2;
  p2.first = "lokest";
  p2.second = 15;
  pair<string,int>p3;
  p3.first = "harsh";
  p3.second = 49;

  m.insert(p2);
  m.insert(p3);
  for(pair<string,int>p:m){// auto
    cout<<p.first<<" "<<p.second<<endl;
  }
}