#include<iostream>
using namespace std;
int main(){
    int a[5];
    int n = sizeof(a) / sizeof(int);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}