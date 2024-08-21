// count Number of Distinct integers After Reverse OPerationbd
#include<iostream>
using namespace std;
int reverse(int n){
    int r =0;
    while(n>0){
        r += 10;
        r += (n%10);
        n /= 10;
    }
    return r;
}
int main(){
    // int n = nums.size();
    // unordered_set<int>s;
    // for(int i=0;i<n;i++){
    //     int rev = reverse(nums[i]);
    //     s.insert(nums[i]);
    //     s.insert(rev);
    // }
    // return s.size();
}