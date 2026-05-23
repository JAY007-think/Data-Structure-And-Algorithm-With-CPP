#include<iostream>
using namespace std;

// make func 1 for sum of 2 number
int sum(int a,int b){
    int s= a+b;
    return s;
}

//make func 2 for min of two number
int min(int a,int b){
    if(a<b)
        return a;       // we don't use {} instead code runs why??
    else
        return b;    
}

int main(){
    int value=sum(10,5); // calling func 1
    cout<<"sum = "<<value<<endl;
    cout<<"min = "<<min(10,5); //calling func 2
    return 0;       // here in this code a and b are parameter but 10 and 5 are arguments
}