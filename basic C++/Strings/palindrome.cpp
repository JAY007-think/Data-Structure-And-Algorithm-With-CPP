#include<iostream>
#include<string.h>
using namespace std;
 
bool isPalindrome(char word[], int n){
    int st = 0 , end = n-1;
    while(st<=end){         // O(n)
        if(word[st++] != word[end--]){
            cout << "not valid palindrome\n";
            return false;
        }
    }
    cout << "valid palindrome\n";
    return true;
}

int main(){
    char word[] = "Race";
    isPalindrome(word, strlen(word));
    return 0;
}