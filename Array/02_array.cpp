#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter size of array: ";
    cin>>size;

    int marks[size];
    for(int i=0;i<size;i++){
        cout<<"enter "<<"element "<<i+1<<": ";
        cin>>marks[i];
    }
    for(int i=0;i<size;i++){
        cout<<marks[i]<<endl;
    }
}