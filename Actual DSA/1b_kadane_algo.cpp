// kadane's algorithm
// LeetCode 53

#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int maxSubArray(vector<int>& nums) {
        int currSum=0,maxSum=INT_MIN;
         for(int val:nums){
            currSum += val;
            maxSum = max(currSum,maxSum);

            if(currSum<0){ // kadane's algo
                currSum =0;
            }
        }
    return maxSum;
    }
int main(){
  vector<int> vec={1,-2,3,4,5};
    int maxSum = maxSubArray(vec);
    cout<<"\nmaximum subarray sum: "<<maxSum<<endl;
}