// this is very powerfull data structure
// because it time complexity is O(1) for insert and search and delete ye insert bhi O(1) me krta hai and O(1) search krta hai and print random order me krta hia
// unique element store krta hia ek se jada element hai to 1 hi ko store krta hia
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
     s.insert(3);
    s.insert(4);
     s.insert(5);
    s.insert(0);
    // for each loop
    for(int ele : s){
        cout<<ele<<" ";
    }
}
