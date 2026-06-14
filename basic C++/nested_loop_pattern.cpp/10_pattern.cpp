// Q.print below pattern- for n=4 -
//             1
//            121
//           12321
//          1234321   
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        // spaces
        for(int j=0;j<n-i-1;j++){
            cout<<"  ";
        }

        // num 1
        for(int j=1;j<=i+1;j++){
            cout<<j<<" ";
        }

        //num 2
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}