#include<iostream>
using namespace std;

int main(){ // print odd number
    int n,i;
    cout<<"enter n: ";
    cin>>n;
    for(i=1;i<=n;i=i+2){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}