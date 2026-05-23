#include<iostream>
using namespace std;
int main(){
    int s1,s2;
    cout<<"enter size of array 1: "<<endl;
    cin>>s1;
    cout<<"enter size of array 2: "<<endl;
    cin>>s2;
    int x[s1];
    cout<<"enter element of array 1: "<<endl;
    for(int i=0;i<s1;i++){
        cin>>x[i];
    }
    int y[s2];
    cout<<"enter element of array 2: "<<endl;
    for(int j=0;j<s2;j++){
        cin>>y[j];
    }

    for(int i=0;i<s1;i++){
        for(int j=0;j<s2;j++){
            if(x[i]==y[j]){
                cout<<x[i]<<" ";
            }
        }
    }

}