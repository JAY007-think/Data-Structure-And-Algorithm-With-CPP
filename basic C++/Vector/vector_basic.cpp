// STL (Standard Template Library)
// STL is a library in C++ that provides ready-made containers,
// algorithms, and iterators.
//
// Components of STL:
// 1. Containers  -> vector, list, deque, stack, queue, map, set, etc.
// 2. Algorithms  -> sort(), reverse(), binary_search(), find(), etc.
// 3. Iterators   -> objects used to traverse containers.
//
// STL saves development time by providing efficient implementations
// of common data structures and algorithms.


// VECTOR: 
// A vector is a dynamic array provided by the STL.
//
// Features:
// 1. vector is like dynamic arrays that can resize dynamically at runtime.
// 2. Elements are stored in contiguous memory locations
//    (just like arrays).
// 3. Supports random access using indexing (O(1)).
// 4. Automatically manages memory allocation and deallocation.
// 5. When capacity becomes full, vector allocates a larger memory block
//    and copies existing elements to the new location.

// Syntax:
// vector<int> vec;                  // Empty vector
// vector<int> vec = {1, 2, 3};      // Vector initialized with values
// vector<int> vec(3, 0);            // Size = 3, all elements initialized to 0 ; Output: [0, 0, 0]
// vector<int> vec(5);               // Size = 5, all elements initialized to 0 ; Output: [0, 0, 0, 0, 0]


#include<iostream>
#include<vector>    
using namespace std;

int main(){

    vector <int> vec1;  // size = 0 
    cout << vec1.size() << "\n";
    
    vector <int> vec2 = {1,2,3,4};  // size = 4
    cout << vec2.size() << "\n";
    
    vector <int> vec3(5,-1);  // size = 5 , initialize with -1 
    cout << vec3.size() << "\n";
    
    for(int i=0;i<vec3.size();i++){
        cout << vec3[i] << " ";        //  vec[i] != *(vec + i) ; not like array arr[i] == *(arr+i)
    }                                  //  vec[i] == *(vec.data()+i) ; beacuse vec is an object not pointer
    cout << endl;

    return 0;
}