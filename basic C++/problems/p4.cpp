#include<iostream>
using namespace std;
int main(){     //  sum of odd number using for loop
    int num,oddSum=0,i,sum=0;
    cout<<"enter a number:";
    cin>>num;

for(i=1;i<=num;i++){
        if(i%2!=0){oddSum +=i;
        }
    }
    cout<<"sum:"<<oddSum;

}