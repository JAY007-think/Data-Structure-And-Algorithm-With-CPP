//  Q print below butterfly pattern for n=4
//  *      *
//  **    **
//  ***  ***
//  ********
//  ********
//  ***  ***
//  **    **
//  *      *
#include<iostream>
using namespace std;
int main(){
    int n=4;

    //pehla padav (upper part)
    for(int i=0;i<n;i++){
        // 1st part *
        for(int j=0;j<=i;j++){
            cout<<"*";
        }

        // 2nd part spaces
        if(i!=n){
            for(int j=0;j<8-(2*(i+1));j++){
                cout<<" ";
            }
        }

        // 3rd part *
        for(int j=0;j<i+1;j++){
            cout<<"*";
            
        }
        cout<<endl;
    }

    // dusra padav
    for(int i=0;i<n;i++){
        // 1st part
        for(int j=0;j<4-i;j++){
            cout<<"*";
        }

        //2nd part
        for(int j=0;j<8-2*(4-i);j++){
            cout<<" ";
        }
        //3rd part
        for(int j=0;j<4-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}