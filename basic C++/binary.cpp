// decimal to binary -

#include<iostream>
using namespace std;

int DecToBinary(int decNum){
    int ans=0,pow=1;
    while(decNum>0){
        int rem = decNum%2; // 2 for binary
        ans +=(rem*pow);
        pow *= 10;

        decNum /=2;
    }
    return ans;     //binary form
}
int main(){
    int decNum;
    cout<<"enter decimal number: ";
    cin>>decNum;
    cout<<DecToBinary(decNum)<<endl;
    return 0;
}