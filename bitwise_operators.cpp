#include<iostream>
using namespace std;
int main(){
    int a=4,b=3;      // binary of a=3 is   0 1 1
                      // binary of b=7 is   1 1 1
                      // binary of (a&b) =  0 1 1
    // bitwise(AND) & // decimal of a&b = 0*4 + 1*2 + 1*1 =3 (if any of both is 0 then ans is 0 else 1)
    cout<<(a&b)<<endl;// output is 3

    // bitwise(OR) |  // binary of (a|b) = 1 1 1 (if bit of both are 0 then ans is 0 else 1 )
    cout<<(a|b)<<endl;// decimal of (a|b) = 1*4 + 1*2 + 1*1 =7

    //bitwise(XOR) ^  // binary of (a^b) 1 0 0 ( if bit of both are same then ans is 0 and if diff then ans is 1)
    cout<<(a^b)<<endl;// decimal of (a^b) 1*4 + 0*2 + 0*1 =4

    //bitwise left shift <<
    cout<<(10<<2)<<endl; // binary of 10 is 1 0 1 0
                         // 10<<2 means each bit shift in left side 2 times
                         // 10<<2 = 1 0 1 0 0 0
                         // change in decimal 1*32 + 1*8 =40 (output)
     // simple formula for (a<<b) = a*(2^b) (here 10*(2^2) = 40)
    
    //bitwise right shift >>
    cout<<(10>>2)<<endl; // binary of 10 is 1 0 1 0
                         // 10>>2 means each bit shift in right side 2 times (but there is no place in right side so remove last 2 bits )
                         // 10>>2 = 1 0 = 0 0 1 0
                         // change in decimal 0+ 1*2 + 0 =2 (output)
    // simple formula for (a>>b) = a/(2^b) (here 10*(2^2) = 2)



}