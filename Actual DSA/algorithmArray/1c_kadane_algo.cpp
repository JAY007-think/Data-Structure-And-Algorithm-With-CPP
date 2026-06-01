#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int currSum = 0, maxSum = INT_MIN;
    int start = 0, end = 0, tempStart = 0;

    for (int i = 0; i < nums.size(); i++) {
        currSum += nums[i];

        // agar naya max mila
        if (currSum > maxSum) {
            maxSum = currSum;
            start = tempStart;
            end = i;
        }

        // Kadane's condition
        if (currSum < 0) {
            currSum = 0;
            tempStart = i + 1; // next index se naya subarray
        }
    }

    // subarray print
    cout << "Maximum Subarray: ";
    for (int i = start; i <= end; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return maxSum;
}

int main() {
    vector<int> vec = {1, -2, 3, 4, 5};

    int maxSum = maxSubArray(vec);
    cout << "Maximum Subarray Sum: " << maxSum << endl;
}
