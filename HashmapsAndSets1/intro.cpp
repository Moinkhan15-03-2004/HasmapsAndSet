#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
s.insert(1);
s.insert(2);
s.insert(3);
s.insert(4);
s.insert(5);
s.insert(6);
s.insert(7);
s.insert(8);
s.insert(8);
cout<<s.size()<<endl;
s.erase(2);
cout<<s.size()<<endl;
// find wheater element is present or not to check the element then we use like this `
int target = 4;
if(s.find(target)!=s.end()){
    cout<<"exists"<<endl;
}
else cout<<"does not exists"<<endl;

// s.find()->it searches in the set , and if it is not present then it returns the last elementmc
for(int ele : s){
    cout<<ele<<" ";// it print in reverse order isme repetion allow nhi hota hai imporatant point unique hota hai sare element 
}
}