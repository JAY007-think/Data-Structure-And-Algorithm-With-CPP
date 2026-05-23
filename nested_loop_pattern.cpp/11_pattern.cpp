// Hollow Diamond Pattern- for n=4
//    *
//   * *
//  *   *  
// *     *
//  *   *
//   * *
//    *       

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;

    //top
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"*";
        
        if(i!=0){
            // inner spaces
            for(int j=0;j<2*i-1;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;

    }

    //bottom
    for(int i=0;i<n-1;i++){
        // spaces
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        cout<<"*";
        
        if(i!=n-2){
            for(int j=0;j<2*(n-i)-5;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}

// for more prefer apna college dsa series lec 4 duration 1:13:28