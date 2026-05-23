#include<iostream>
using namespace std;

int main(){
    int marks[5]={34,56,87,12,9};
    marks[0]=101;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    // finding array size
    cout<< sizeof(marks)<<endl;
    int arrSize = sizeof(marks)/sizeof(int);
 
    // loop 0 to (size-1)
    for(int i=0;i<arrSize;i++){
        cout<<marks[i]<<endl;
    }

    
}