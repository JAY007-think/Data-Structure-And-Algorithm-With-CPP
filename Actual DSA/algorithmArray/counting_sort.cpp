#include <iostream>
#include<algorithm>
using namespace std;

int maxElement(int *arr, int n) {
    int mx = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > mx) {
            mx = arr[i];
        }
    }

    return mx;
}

void countingSort(int *arr, int n) {

    int mx = maxElement(arr, n);

    int freq[mx + 1] = {0};

    // Count frequencies
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Print sorted output
    for (int i = 0; i <= mx; i++) {
        while (freq[i] > 0) {
            cout << i << " ";
            freq[i]--;
        }
    }
}

int main() {

    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(int);
    countingSort(arr, n);
    cout<<endl;

    // InBuilt Sort
    int arr2[8] = {2, 4, 1, 6, 2, 5, 3, 7};
    
    //ascending
    sort(arr2,arr2+8);
    for (int i=0;i<8;i++) {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    //descending
    sort(arr2,arr2+8,greater<int>());
    for (int i=0;i<8;i++) {
        cout<<arr2[i]<<" ";
    }
    return 0;
}