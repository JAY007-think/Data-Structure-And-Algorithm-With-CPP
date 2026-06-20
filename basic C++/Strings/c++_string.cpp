// C++ Strings are objects of pre defined string class STL.
// C++ String have useful member functions.
// C++ Strings are dynamic (their size can change at run time).
// C++ String support operators like +,==,<,> etc.
// C++ Strings are stored contiguously in memory.

#include<iostream>
#include<string.h>
using namespace std;
int main(){

    char arr[5]; // size is fixed
    string str = "Hello";       // here string is class and str is object
    str = "Yellow";     // dynamic in size
    cout << str << endl;
    cout << str[0] << endl;

    string str1;
    getline(cin, str1, '$');  // here dilimiter is "$" -  means jab $ ka sign aayega tab uske baad ka input nhi ayega  
    cout << str1 << endl;
    return 0;
}