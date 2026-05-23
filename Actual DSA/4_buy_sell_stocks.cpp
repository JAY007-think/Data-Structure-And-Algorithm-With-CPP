// Best time to buy and sell stock 
//leetcode 121

// time complexity = O(n+n) = O(2n) = O(n)
#include<iostream>
#include<climits>
using namespace std;
void maxProfit(int *price,int n){
    int minPrice[100000];
    minPrice[0] = INT_MAX;
    for(int i=1;i<n;i++){
        minPrice[i] = min(minPrice[i-1],price[i-1]);
    }
    int maxProfit = 0;
    for(int i=0;i<n;i++){
        int currProfit = price[i]-minPrice[i];
        maxProfit = max(maxProfit,currProfit);
    }
    cout<<maxProfit<<endl;
}
int main(){
    int price[]={7,1,5,3,6,4};
    int n = sizeof(price)/sizeof(int);
    maxProfit(price,n);
}