// waf to print all prime numbers from 2 to N
#include<iostream>
using namespace std;
bool isPrime(int x){ 
    
    for(int i=2;i<x;i++){
            if(x%i==0){
                return false;
            }    
        }
        return true;
}
void primeN(int n){
    for(int i=2;i<=n;i++){
        if(isPrime(i)==true){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cout<< "enter n: ";
    cin>>n;
    primeN(n);
    return 0;
}
