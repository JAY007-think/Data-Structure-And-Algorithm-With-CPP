//      Q Inverted Triangle Pattern - for n=4 -
//          1 1 1 1
//            2 2 2
//              3 3
//                4

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int num=1;
    for(int i=0;i<n;i++){

        // loop for spaces -
        for(int j=0;j<i;j++){
            cout<<"  ";
        }

        // loop for nums -
        for(int j=0;j<n-i;j++){
            cout<<(i+1)<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}