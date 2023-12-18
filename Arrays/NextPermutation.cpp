#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int temp;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (i > 0) {
                for (int j = i - 1; j >= 0; j--) {
                    if (nums[i] > nums[j]) {
                        temp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = temp;
                        cout<<j<<endl;
                        sort(nums.begin() + j + 1, nums.end());
                        return;  // Return after swapping to get the next permutation
                    }
                }
            } else {
                reverse(nums.begin(), nums.end());
            }
        }
    }
};

int main() {
    Solution solution;

    // Example usage:
    vector<int> nums = {4,2,0,2,3,2,0};
    
    // Display the original vector
    cout << "Original Vector: ";
    for (int value : nums) {
        cout << value << " ";
    }
    cout << endl;

    // Get the next permutation
    solution.nextPermutation(nums);

    // Display the vector after getting the next permutation
    cout << "Next Permutation: ";
    for (int value : nums) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
