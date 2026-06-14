//         Q. WAP to print below pattern for n=4
//         A B C D 
//         A B C D 
//         A B C D 
//         A B C D 


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    for(int i=0;i<n;i++){
        char x = 'A';
        for(int j=0;j<=n-1;j++){
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
}