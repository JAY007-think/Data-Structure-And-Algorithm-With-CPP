#include<iostream>
using namespace std;
int SumN(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum += i;
        }
        return sum;
}
int main(){
    cout<<SumN(5)<<endl; // this will show sum of 5 number(1 to 5)
    cout<<SumN(10)<<endl; // this will show sum of 10 number(1 to 10)
}