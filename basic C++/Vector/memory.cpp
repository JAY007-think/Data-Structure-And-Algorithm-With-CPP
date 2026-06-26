// static vs dynamic allocation
// 1. static memory allocate in compile time, while dynamic memory allocate in run time (new operator)
// 2. static memory is inside stack , while dynamic memory is inside heap memory
// 3. memory get freed automatically , while dynamic memory needs to be freed explicitly (using delete operator)

// check apna college c++ dsa series lecture 9  duration 15:03 for better understanding

//  Memory leak: 
//  A memory leak occurs when programmers create a memory in a heap and forget to delete it.
//  Leads to reduced performance due to depletion of available memory.

#include<iostream>
#include<vector>
using namespace std;

void funcInt(){
    int *ptr = new int;         // cout << arr is equal cout << &arr[0]
    *ptr = 5;
    cout << *ptr;
    delete ptr;
}

void funcArr(){
    int size;
    cin >> size;
    
    int *ptr = new int[size];  // new keyword is use to store in new memory
    
    int x = 1;
    for(int i=0;i<size;i++){
        ptr[i] = x;
        cout << ptr[i] << " ";
        x++;
    }
    cout << endl;

    delete [] ptr;
}

int main(){
    funcArr();
    funcInt();

}