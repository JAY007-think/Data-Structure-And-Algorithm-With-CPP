#include<iostream>
using namespace std;

void acsending(int *arr, int n){
    for(int i=0;i<n-1;i++){
        int minIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);
    acsending(arr,n);
}

// Selection Sort:
// Har position ke liye minimum element ka minIdx dhundo
// Poore remaining array me search karo
// Minimum milne ke baad usko current position pe swap karo
// Har pass ke baad left side sorted ho jati hai
// 1 _ _ _ _
// 1 2 _ _ _
// 1 2 3 _ _