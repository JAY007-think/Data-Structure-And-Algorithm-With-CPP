#include<iostream>
#include<string.h> // or #include<cstring>
using namespace std;

int main(){
    char str1[100] = "Hy";
    char str2[100] = "Hello World";
    // str2 = "Jay Soni"; not valid
    strcpy(str1,str2);      // for copy strcpy(destination, source)
    cout << str2 << endl;
    
    strcat(str1, str2);     // for concenate (join) strcat(str1, str2)
    cout << str1 << endl;
    cout << str2 << endl;

    cout << strcmp(str1,str2)<<endl; // for comparison strcmp(str1, str2) if result 0 means equal else not equal

    string str = "Good Morning!";

    // member function
    cout << str.length() << endl;       //length
    cout << str[3] << endl;
    cout << str.at(3) << endl;
    cout<< str.substr(5,4) << endl;     // substring

    string str3 = "I love coding in c++ & Java. I don't like JavaScript";
    cout << str3.find("c++") << endl;   // find index

    int idx = str.find("python"); 
    cout << idx << endl;
    
    return 0;
}