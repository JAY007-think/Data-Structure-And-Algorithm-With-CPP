// Pass by value = copy of argument is passed to function
#include<iostream>
using namespace std;

int sum(int a,int b){
    a=a+10; //15
    b=b+10; //16
    return a+b; //29
}
int main(){
    int a=5,b=6;
    cout<<sum(a,b)<<endl;

    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}