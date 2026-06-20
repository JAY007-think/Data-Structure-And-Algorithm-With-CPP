#include<iostream>
#include<string>
using namespace std;
int main(){

    // normal loop for specific index
    string str = "Good Morning!";
    for(int i=0;i<str.length();i++){
        cout << str[i] << " ";
    }
    cout<<endl;

    // for each loop - for all character
    for( char ch : str){
        cout << ch << " ";
    }
        cout << endl;
    return 0;
}