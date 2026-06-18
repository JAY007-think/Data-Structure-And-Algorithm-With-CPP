#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char arr[5] = {'a','b','c','d','\0'};
    cout << arr[0] << endl;         // a
    cout << arr[1] << endl;         // b
    cout << arr[2] << endl;         // c
    cout << arr[3] << endl;         // d
    cout << arr[4] << endl;         // 
    cout << arr << endl;            // abcd

    char work[] = "code";       // 'c' 'o' 'd' 'e' '\0'
    char work1[5] = "code";
    char work2[] = {'c','o','d','e','\0'};
    char work3[50] = {'c','o','d','e','\0'};
    cout << strlen(work) << endl;
    cout << work<<endl;
    cout << work1<<endl;
    cout << work2<<endl;
    cout << work3<<endl;

    // char word[10];
    // cin >> word;        // ignore whitespace so we use cin.getline(sentence, 30)
    // cout << "your word was : " << word <<endl;
    // cout << "length : " << strlen(word) << endl;
    
    char sentence[30];
    cin.getline(sentence, 30, '*');         // third arguement is called delimiter (here *)
    cout << "your word was : " << sentence <<endl;
    cout << "length : " << strlen(sentence) << endl;
    return 0;
} 