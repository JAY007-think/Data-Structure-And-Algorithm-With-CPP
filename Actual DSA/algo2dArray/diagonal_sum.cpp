#include<iostream>
using namespace std;
int diagonalSum1(int mat[][3],int n){
    int sum = 0;
    for(int i=0; i<n; i++){        // time complexity = O(n^2)
        for( int j=0; j<n; j++){
            if(i==j){
                sum += mat[i][j];
            }else if(j == n-i-1){
                sum += mat[i][j];
            }
        }
    }
    cout << "sum = "<< sum <<endl;
}

int diagonalSum2(int mat[][3],int n){
    int sum = 0;
    for(int i=0;i<n;i++){       // time complexity = O(n)
        sum += mat[i][i];
        if(i != n-i-1){
            sum += mat[i][n-i-1];
        }
    }
    cout << "sum = "<< sum <<endl;

}


int main(){
    int mat[3][3] = {{1, 2, 3},
                     {5, 6, 7},
                     {9, 10, 11}};
    diagonalSum1(mat,3); // O(n^2)
    diagonalSum2(mat,3); // O(n)
}