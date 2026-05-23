// sum of all numbers from 1 to N which are divisible by 3

#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"enter N: ";
    cin>>N;
    int i=1,sum=0;
    while(i<=N){
        if(i%3==0){
            sum+=i;
            }
            i++;
        }
    cout<<"sum: "<<sum;
}