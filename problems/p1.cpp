
#include<iostream>
using namespace std;
int main(){     //  sum of odd number 
    int num,oddSum=0,i=1,sum=0;
    cout<<"enter a number:";
    cin>>num;
    while(i<=num){
        if(i%2!=0){sum+=i;
            i++;
        }}
        cout<<"sum="<<sum;
    return 0;

}