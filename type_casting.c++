// Type Casting = converting data from one type to another
#include<iostream>
using namespace std;
int main(){

//coversion(implicit)
//small size to big size for ex: float(4 bytes) to double(8 bytes)
    float price=100.253845; // (4 bytes = 32 bits)
    double newPrice=price; // (8 bytes = 64 bits)
    cout <<newPrice<<endl;

    char grade='A'; // char = 1 byte
    int marks=grade; // int = 4 byte
    cout<<marks<<endl; // this will print ASCII value of A which is 65

// casting(explicit)
//big size to small size for double(8 bytes) to int(4 bytes)
    double Marks=94.57;
    int newMarks= (char)Marks;
    cout<< newMarks<<endl;
}