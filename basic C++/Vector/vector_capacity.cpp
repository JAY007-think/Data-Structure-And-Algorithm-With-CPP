// size -> number of element present in a vector 
// capacity -> maximum number of element that a vector can hold

// When capacity becomes full, vector allocates a larger memory block
// and copies existing elements to the new location.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec = {1,2,3};
    cout << "size: " << vec.size() << endl;             // 3
    cout << "capacity: " << vec.capacity() << endl;     // 3
    
    vec.push_back(4);
    cout << "size: " << vec.size() << endl;             // 4
    cout << "capacity: " << vec.capacity() << endl;     // 6
    
    vec.push_back(5);
    cout << "size: " << vec.size() << endl;             // 5
    cout << "capacity: " << vec.capacity() << endl;     // 6

    vec.push_back(6);
    cout << "size: " << vec.size() << endl;             // 6
    cout << "capacity: " << vec.capacity() << endl;     // 6

    vec.push_back(7);
    cout << "size: " << vec.size() << endl;             // 7
    cout << "capacity: " << vec.capacity() << endl;     // 12
}