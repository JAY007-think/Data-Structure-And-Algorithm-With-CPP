#include<iostream>
using namespace std;
int main(){
    int a=10,b=5;


    //arithmatic operators (+,-,*(asterisk),/,%)
    
    cout<<"sum "<<(a+b)<<endl;
    cout<<"difference "<<(a-b)<<endl;
    cout<<"product "<<(a*b)<<endl;
    cout<<"division "<<(a/b)<<endl;     //  int/int=int, float/int=float, double/int=double
    cout<<"remainder "<<(a%b)<<endl;
    cout<<(5/(float)2)<<endl;


    // relational operators (< ,<= ,> ,>= ,== ,!= )

    cout<<(3<5)<<endl; // true : 1
    cout<<(3>5)<<endl; // false : 0


    // logical operator (OR:||, AND:&&, NOT:!)
    cout<<!(3<1)<<endl;
    cout<<((3<1)||(3==2))<<endl; // OR
    cout<<((6==3)&&(6!=3))<<endl; // AND
    return 0;
}