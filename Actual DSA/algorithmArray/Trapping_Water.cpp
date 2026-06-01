#include<iostream>
#include<climits>
using namespace std;
int trappedWater(int *height , int n){
    int leftMax[20000],rightMax[20000];
    leftMax[0] = 0,rightMax[n-1]=0;

    for(int i=1;i<n;i++){
        leftMax[i] = max(leftMax[i-1],height[i-1]);
    }
    for(int i=n-1;i>=0;i--){
        rightMax[i] = max(rightMax[i+1],height[i+1]);
      
    }
    int water=0;
    for(int i=0;i<n;i++){

        water += max(0,(min(leftMax[i],rightMax[i]) - height[i]));
    }
   
    cout<<water<<endl;
    
}
int main(){
    int height[]={4,2,0,3,2,5};
    int n = sizeof(height)/sizeof(int);
    trappedWater(height,n);   
}