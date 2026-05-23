# include<iostream>
using namespace std;

int main(){
    int n;
    bool isPrime = true;
    cout<<"enter a number: ";
    cin>>n;
    for(int i=2;i<n;i++){     // we can also write for(i=2;i*i<=n;i++) for more see "DSA series apna college lecture 3 timeline 1:20:00"
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if (isPrime == true){
        cout<<"prime";
    }else{
        cout<<"non prime";
    }
    
    
}