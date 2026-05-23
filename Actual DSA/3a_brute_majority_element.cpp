// time complexity O(n^2)
#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int> nums){
    for(int val: nums){
        int freq=0;
        int n = nums.size();
        for(int el: nums){
            if(val==el){
                freq++;
            }
        }
        if(freq > n/2){
            return val;
        }
    }
}
int main(){
    vector<int> nums={3,2,3};
    int m;
    cout<<majorityElement(nums);
}