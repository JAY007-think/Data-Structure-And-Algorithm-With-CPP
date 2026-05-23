//leetcode 53

#include<iostream>
#include<climits>
using namespace std;

// print max subArray
int MaxSubArray(int *arr,int n){
    for(int st=0;st<n;st++){
        for(int lt=st;lt<n;lt++){
            // cout<<"("<<arr[st]<<","<<arr[lt]<<")"<<" ";
            for(int i=st;i<=lt;i++){
                cout<<arr[i]<<" ";
            }
            cout<<", ";
        }
        cout<<endl;
    }
}

// max subArray Sum (brute force approach) - O(n3)
int MaxSubArraySum1(int *arr,int n){
    int maxSum = INT_MIN;
    for(int st=0;st<n;st++){
        for(int lt=st;lt<n;lt++){
            int currSum = 0;
            for(int i=st;i<=lt;i++){
                currSum += arr[i];
            }
            if(currSum>maxSum){
                maxSum = currSum;
            }
            cout<<currSum<<", ";
        }
        cout<<endl;
    }
    cout<<"maxSum = "<<maxSum<<endl;
}

// max subArray sum 2 (optimized) - O(n2)
int MaxSubArraySum2(int *arr,int n){
    int maxSum = INT_MIN;
    for(int st=0;st<n;st++){
        int currSum=0;
        for(int lt=st;lt<n;lt++){
            currSum += arr[lt];
            maxSum = max(currSum,maxSum);
        }
    }
    cout<<"maxSum = "<<maxSum<<endl;
}

// kadane's algo (most optimized) - O(n)
int MaxSubArraySum3(int *arr,int n){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i=0;i<n;i++){
        currSum += arr[i];
        maxSum = max(maxSum,currSum);
        if(currSum<0){
            currSum = 0;
        }
    }
    cout<<"maxSum = "<<maxSum<<endl;
}

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    MaxSubArraySum1(arr,n);
    MaxSubArraySum2(arr,n);
    MaxSubArraySum3(arr,n);
    cout<<"size of array = "<<n<<endl;

}