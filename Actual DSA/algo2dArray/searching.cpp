#include<iostream>
using namespace std;

int bruteSearch(int arr[][4],int m,int n,int key){              // O(m x n)
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==key){
                cout<<i<<","<<j<<endl;
            }
        }
    }
    cout<<"not found"<<endl;
}

int binarySearch(int arr[][4], int m, int n, int key){          // O(n x logm)
    for(int i=0;i<m;i++){
        int st = 0, end = n-1;
        while(st<=end){
            int mid = (st+end)/2;
            if(arr[i][mid]==key){
                cout<<i<<","<<mid<<endl;
                return 0;
            }else if(arr[i][mid]<key){
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }
    }
    cout<<"not found"<<endl;
}

int staircaseSearch(int arr[][4], int m, int n, int key){       // O(n + m)
        int row=0,col=n-1;
        while(row<m && col>=0){
            if(arr[row][col] == key){
                cout<<row<<","<<col<<endl;
                return 0;
            }else if(arr[row][col]<key){
                row++;
            }else{
                col--;
            }
        }
        cout<<"not found"<<endl;
    }
int main(){
    int m=5,n=4;
    int key = 12;
    int arr[5][4]={{10,20,30,40},
                    {15,25,35,45},
                    {27,29,37,48},
                    {32,33,39,50},
                    {42,44,45,64}};
    bruteSearch(arr,m,n,key);
    binarySearch(arr,m,n,key);
    staircaseSearch(arr,m,n,key);
}