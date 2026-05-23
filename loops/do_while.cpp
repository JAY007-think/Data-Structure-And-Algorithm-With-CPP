#include<iostream>
using namespace std;

int main(){
    do{
        cout<<"hello world!\n";
    }while(3>5); // "condition is false" still one time output is come bcz firstly loop is run and than condition is checked
    
    // print numbers
    int n=10,i=1;
    do{
        cout<<i<<" ";
        i++;
    }while(i<=n);
    return 0;
}