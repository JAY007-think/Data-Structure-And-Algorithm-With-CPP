#include<iostream>
#include<string>
using namespace std;

bool IsAnagram(string str1,string str2){
    if(str1.length() != str2.length()){
        cout << "not valid anagram" << endl;
        return false;
    }

    int count[26] = {0};
    for(int i=0;i<str1.length();i++){
        int idx = str1[i]-'a';
        count[idx]++;
    }
    for(int i=0;i<str2.length();i++){
        int idx = str2[i] - 'a';
        if(count[idx] == 0){
            cout << "not valid anagram" <<endl;
            return false;
        }
        count[idx]--;
    }
    cout << "valid anagram" << endl;
    return 0;
}

int main(){
    string str1 = "Anagram";
    string str2 = "nagaram";

    IsAnagram(str1,str2);
    return 0;

}