// STL : standard template library : vector,queue,stack,

// vector are dynamic , means size of vectors is not fixed, while size of array is fixed
// vector ko dynamic memory allocate hoti h
// vector syntax:
        // vector<int>vec;
        // vector<int> vec = {1,2,3}
        // vector <int> vec(3,0) , here 3 is size of array , 0 is value at all index

#include<iostream>
#include<vector>        // vector headerfile
using namespace std;

int main(){
    vector <int> vec;  // yaha vector me koi value nhi h mtlb size of vector abhi zero hai
    vector <int> vec1 = {1,2,3}; // now size of array is 3
    cout<<vec1[0]<<endl;
    vector<int>vec2(3,0);
    cout<<vec2[0]<<" ";
    cout<<vec2[1]<<" ";
    cout<<vec2[2]<<endl;

    //  for each loop
    vector<char>vec3={'a','b','c','d','e','f'};
    for(char val : vec3){
        cout<<val<<endl;
    }
    return 0;
}