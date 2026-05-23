#include<iostream>
#include<vector>        // vector headerfile
using namespace std;

// vector functions:
// 1. size 
// 2. push_back
// 3. pop_back
// 4. front
// 5. back
// 6. at

int main(){
    vector<char>vec={'a','b','c','d'};
    for(char val : vec){ //for each loop
        cout<<val<<endl;
    }
   
    // 1. size
    cout<<"size = "<<vec.size()<<endl;

    // 2. push_back - insert element at last
    vec.push_back('e'); // this will add 'e' in last position of vector, don't use "e" instead of 'e'
    for(char val : vec){ //for each loop
        cout<<"vector after push back 25 : "<<val<<endl;
    }
    cout<<"size after push back : "<<vec.size()<<endl;
    
    // 3. pop back - delete last element
    vec.pop_back();
    for(char val : vec){ //for each loop
        cout<<"vector after push back 25 : "<<val<<endl;
    }
    cout<<"size after push back : "<<vec.size()<<endl;

    // 4. front
    cout<<vec.front()<<endl;

    // 5. back
    cout<<vec.back()<<endl;

    // 6. at
    cout<<vec.at(2)<<endl;

    return 0;
}