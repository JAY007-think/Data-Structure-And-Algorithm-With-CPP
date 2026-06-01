// maximum subArray Sum by brute force approach
// LeetCode 53

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n=5;
    int arr[5] = {1,2,3,4,5};
    int maxSum = INT_MIN;
    cout<<"maximum subarray: "<<endl;
    for(int st=0;st<n;st++){ // st stands for start
        int currSum = 0;
        for(int end=st;end<n;end++){
            cout<<"[";
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<"]";
            cout<<" ";
            currSum += arr[end];
            maxSum = max(currSum,maxSum);
        }
        cout<<endl;
    }

    cout<<"maximum subarray sum: "<<maxSum;
    return 0;
}

// check most optimize method - kadane's algorithm - kadane_algo.cpp
