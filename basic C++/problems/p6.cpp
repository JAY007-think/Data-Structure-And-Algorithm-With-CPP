#include<iostream>
using namespace std;
int main(){
    int N,i=1,factorial=1;
    cout << "enter N: ";
    cin>>N;

    // solution for loop -

    // for(i=1;i<=N;i++){
    //     factorial=factorial*i;
    // }
    // cout<<"factorial of "<<N<<" is: "<<factorial;


    // solution while loop -

    // while(i<=N){
    //     factorial=factorial*i;
    //     i++;
    // }
    // cout<<"factorial of "<<N<<" is: "<<factorial;


    // solution do while loop -

    do{
        factorial=factorial*i;
        i++;
    }while(i<=N);
    cout<<"factorial of "<<N<<" is: "<<factorial;

    return 0;
}