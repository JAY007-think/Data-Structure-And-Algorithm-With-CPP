#include<iostream>
using namespace std;

int main(){ // print 1 to 5 numbers
    int count=1,n;              // initialization
    cout<<"enter n: ";
    cin>>n;
    while(count<=n){            // condition
        cout<<count<<" ";
        count++;                // updation
    }
    return 0;
}