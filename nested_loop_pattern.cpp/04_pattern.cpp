//       Q. WAP to print below pattern for n=4 -
//      *
//      **
//      ***
//      ****

#include<iostream>
using namespace std;
int main(){
    int n;
    char x='*';
    cout<<"enter a number: ";
    cin>>n;
    for(int i=0;i<n;i++){ //n
        for(int j=0;j<i+1;j++){ //i+1
            cout<<"*"<<" ";  
        }
        cout<<endl;
    }
    return 0;
}
