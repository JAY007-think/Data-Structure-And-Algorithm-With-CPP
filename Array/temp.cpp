#include<iostream>
using namespace std;
int binSearch(int *arr , int n , int val){
    int st=0,lt=n-1;
    while(st<=lt){
        int mid = (st + lt)/2;
        
    if(val==arr[mid]){
        return mid;
    }else if(val<arr[mid]){
        lt = mid -1;
    }else if(val>arr[mid]){
        st = mid+1;
    }
    }
    return -1;
}
int main(){
    int arr[] = {2,4,6,8,10,12,14,16};
    int n = sizeof(arr)/sizeof(int);
    cout<<binSearch(arr,n,10)<<endl;
}