#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={ {40,32,45},
                    {23,65,12},
                    {34,27,28} };
    cout<<arr[1][1]<<endl;

    // input & output
    int arr2[3][4];
    for(int i=0; i<3;i++){
        for(int j=0;j<4;j++){
            // cout<<"enter arr2["<<i<<"]["<<j<<"] :"<<endl;
            cin>>arr2[i][j];
        }
    }
    for(int i=0; i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}
