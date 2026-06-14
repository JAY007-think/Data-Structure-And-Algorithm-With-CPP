// waf to check if a number is prime or not
#include<iostream>
using namespace std;

int prime(int n){bool isPrime=true ;
     for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime =false;
            return 0;
        }
     }    
    if(isPrime==true)
        return 1;
    else
        return 0;
}
        
int main(){ int n;
    cout<<"enter n: ";
    cin>>n;
    if(prime(n)==1)
        cout<<"prime";
    else
        cout<<"not prime";
}        
       
     
