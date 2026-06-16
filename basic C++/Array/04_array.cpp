#include<iostream>
using namespace std;

int LinearSearch(int x[],int n, int target){
    for(int i=0;i<n;i++){
        if(x[i]==target){
            return i;
        }
    }
    return -1;
}

int BinarySearch(int x[],int n, int target){
    int st=0 ,end = n-1;
    while (st<=end){
        int mid = (st+end)/2;
        if(x[mid]==target){
            return mid;
        }else if(x[mid]<target){  // 2nd half
            st = mid + 1;
        }else{ // 1st half
            end = mid - 1;
        }
    }
    return -1;    
}

int main(){
    int x[] = {3,45,1,-3,4,9,76};
    int n = sizeof(x)/sizeof(int);
    int target = -3;
    cout<<LinearSearch(x,n,target)<<endl;
    cout<<BinarySearch(x,n,target)<<endl;
}