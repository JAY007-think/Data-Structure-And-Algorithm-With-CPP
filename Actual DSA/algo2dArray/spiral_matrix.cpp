#include<iostream>
using namespace std;
void spiral_matrix(int arr[][4], int m, int n){
    int srow = 0 , erow = m-1;
    int scol = 0 , ecol = n-1;
    cout<<"spiral of matrix is: "<<endl;
    while(srow<=erow && scol<=ecol){
        // top
        for(int i=scol;i<=ecol;i++){
            cout<<arr[srow][i]<<" ";;
        }
        // right 
        for(int j=srow+1;j<=erow;j++){
            cout<<arr[j][ecol]<<" ";
        }
        // bottom
        for(int i=ecol-1;i>=scol;i--){
            cout<<arr[erow][i]<<" ";
        }
        // left
        for(int j=erow-1;j>=srow+1;j--){
            cout<<arr[j][scol]<<" ";
        }
        srow++,erow--;
        scol++,ecol--;
    }
}
int main(){
    int m=4,n=4;
    int arr[4][4];
    cout << "enter array element: " << endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    cout << "your entered array" <<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    spiral_matrix(arr,m,n);
}