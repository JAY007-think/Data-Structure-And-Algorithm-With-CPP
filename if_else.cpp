#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age: ";
    cin>>age;
    if(age>=18)                 //we can ignore curly braces{} after if() ,if there is only one single statement
        cout<<"you can vote";
     else{
        cout<<"you can't vote";
    }
    return 0;
}

