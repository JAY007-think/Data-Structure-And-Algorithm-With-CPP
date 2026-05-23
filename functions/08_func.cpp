#include<iostream>
using namespace std;

int fiboN(int n){ 
    int A1=0,A2=1;
    if(n==0)
        return A1;
    if(n==1)
        return A2;  
    int An;
    for(int i=2;i<=n;i++){
        An = A1 + A2;
        A1=A2;
        A2=An;
    }
    return A2;

}

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<"fibonnaci number : "<<fiboN(n);

}