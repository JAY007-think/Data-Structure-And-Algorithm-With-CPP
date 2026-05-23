//       Q. WAP to print below pattern for n=4
//       1
//       2 2
//       3 3 3
//       4 4 4 4

#include<iostream>
using namespace std;
int main(){
    int n;                                            
    cout<<"enter a number: ";               
    cin>>n;                                 
    for(int i=0;i<n;i++){                   
        for(int j=0;j<=i;j++){              
            cout<<(i+1)<<" ";               
        }                                   
        cout<<endl;
    }


    // Q. to print below for n=4
    //      A
    //      B B
    //      C C C
    //      D D D D

    /*  int n;
    char x= 'A';
    cout<<"enter a number: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<x<<" ";
        }
        x++;
        cout<<endl;
    }   */
}