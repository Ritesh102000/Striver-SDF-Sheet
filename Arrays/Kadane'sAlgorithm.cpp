#include <vector>
#include <climits> // for INT_MIN

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        if (nums.empty()) {
            // Handle the case where the input vector is empty.
            return 0; // You can choose a different default value if needed.
        }

        int max_current = nums[0];
        int max_global = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            max_current = std::max(nums[i], max_current + nums[i]);
            max_global = std::max(max_global, max_current);
        }

        return max_global;
    }
};

int main(){
    return 0;
}
