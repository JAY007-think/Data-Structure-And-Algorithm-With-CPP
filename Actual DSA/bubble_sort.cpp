#include<iostream>
using namespace std;
void sort(int *arr,int n){
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-1-j;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {3,4,2,5,1};
    int n = sizeof(arr)/sizeof(int);
    sort(arr,n);
}


// Bubble Sort:
// Isme sabse bada element bubble ki tarah folat karke upar (end) me chala jata hai
// Agar bada element pehle hai to swap karo
// Har pass me adjacent elements compare hote hain
// Har pass ke baad last part sorted ho jata hai
// _ _ _ _ 9
// _ _ _ 8 9
// _ _ 7 8 9