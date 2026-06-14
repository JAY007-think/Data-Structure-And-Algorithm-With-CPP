#include<iostream>
using namespace std;

int main(){
    char x;
    cout<<"enter character: ";          // we can also write in ASCII form
    cin>>x;                             
    if(x>='a' && x<='z'){               // if(x>=97 && x<=122){
        cout<<"Lowercase";              //      cout<<"Lowercase";
    }else if(x>='A' && x<='Z'){         // }else if(x>=65 && x<=90){
        cout<<"Uppercase";              //      cout<<"Uppercase";
    }else{                              // }
        cout<<"non alphabet";           //
    }                                   
    return 0;                           
}
