// Reverse Triangle pattern
// Q. for n=4
// 1                A
// 2 1              B A
// 3 2 1            C B A
// 4 3 2 1          D C B A

#include<iostream>
using namespace std;
int main(){
    int n;
    char x ='A';
    cout<<"enter n: ";
    cin>>n;
    for(int i=0;i<n;i++){char p=x;
        for(int j=0;j<=i;j++){
            
            cout<<p;
            p--;
        }
        x++;
        
        cout<<endl;
    }
}