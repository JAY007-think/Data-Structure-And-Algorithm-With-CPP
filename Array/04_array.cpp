#include<iostream>
using namespace std;

int LinearSearch(int x[],int size, int target){
    for(int i=0;i<size;i++){
        if(x[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int x[] = {3,45,1,-3,4,9,76};
    int size = 7;
    int target = 8;
    cout<<LinearSearch(x,size,target)<<endl;
}