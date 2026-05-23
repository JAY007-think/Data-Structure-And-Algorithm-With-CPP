// static vs dynamic allocation
// 1. static memory allocate in compile time, while dynamic memory allocate in run time 
// 2. static memory is inside stack , while dynamic memory is inside heap memory

// check apna college c++ dsa series lecture 9  duration 15:03 for better

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec; 
    cout<< vec.size()<<endl; // size = 0 
    cout<<vec.capacity()<<endl; // capacity = 0

    vec.push_back(0); 
    cout<< vec.size()<<endl; // size = 1 
    cout<<vec.capacity()<<endl; // capacity = 1 

    vec.push_back(1); 
    cout<< vec.size()<<endl; // size = 2
    cout<<vec.capacity()<<endl; // capacity = 2 

    vec.push_back(2); 
    cout<< vec.size()<<endl; // size = 3 
    cout<<vec.capacity()<<endl; // capacity = 4 

    vec.push_back(3); 
    cout<< vec.size()<<endl; // size = 4 
    cout<<vec.capacity()<<endl; // capacity = 4 
    
    vec.push_back(4); 
    cout<< vec.size()<<endl; // size = 5
    cout<<vec.capacity()<<endl; // capacity = 8 
    
}