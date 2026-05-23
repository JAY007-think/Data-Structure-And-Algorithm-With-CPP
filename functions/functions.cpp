// function is use to reduce redundancy in code (redudancy means unnecessary repeatition in code)
// syntax -
//     returnType FunType(type1,type2...){
//         cout<<"hello";
//     }

#include<iostream>
using namespace std;

// function definition
int printHello(){
    cout<<"Hello\n";
    return 3;
}

int main(){
    //function call / invoke
   cout<< printHello()<<endl;
    
}