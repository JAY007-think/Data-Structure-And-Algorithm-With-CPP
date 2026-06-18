#include<iostream>
using namespace std;

int main(){
    char ch1 = 'a';         // char occupied 1 byte = 8 bits in memory
    char ch2 = 'X';
    char ch3 = '%';
    char ch4 = '9';
    char ch5 = '\t';

    char ch = 'A';
    cout << (int) ch << endl;  // 'A' to 'Z' == ( 65 to 90 )
    ch = 'Z';
    cout << (int) ch << endl;
    ch = 'a';
    cout << (int) ch << endl;   // 'a' to 'z' == ( 97 to 122 )
    ch = 'z';
    cout << (int) ch << endl;

    char ch6 = 'F';
    int pos = ch6 - 'A';
    cout << pos << endl;        // Position

    "Hello world"  // string literals
    "Jay soni";     // string literals
    5;              // string literals
    return 0;
}