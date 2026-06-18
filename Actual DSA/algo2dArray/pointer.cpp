#include<iostream>
using namespace std;

void func(int mat[][4],int n, int m){
    cout << "0th row ptr" << mat << endl;
    cout << "1st row ptr" << mat + 1 << endl;
    cout << "2nd row ptr" << mat + 2 << endl;

    cout << "0th row values " << *mat << endl;
    cout << "1st row values " << *(mat + 1) << endl;
    cout << "2nd row values " << *(mat + 2) << endl;
}
void func2(int (*mat)[4], int n, int m){
    cout << "0th row values " << *(*mat + 0) << endl;
    cout << "1st row values " << *(*(mat + 1) + 1) << endl;
    cout << "2nd row values " << *(*(mat + 2) + 2) << endl;

}
int main(){
    int mat[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    
    func2(mat,4,4);
    return 0;
}