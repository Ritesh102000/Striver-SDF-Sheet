#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> temp;
        numRows--;
        int count = 2;
        temp.push_back(1);
        ans.push_back(temp);
        temp.clear();
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < count; j++) {
                if (j == 0 || j == count - 1) {
                    temp.push_back(1);
                } else {
                    temp.push_back(ans[i][j] + ans[i][j - 1]);
                }
            }
            ans.push_back(temp);
            temp.clear();
            count++;
        }
        return ans;
    }
};

int main() {
    Solution solution;

    // Set the number of rows you want to generate
    int numRows = 5;

    // Generate Pascal's Triangle
    vector<vector<int>> result = solution.generate(numRows);

    // Display the result
    for (const vector<int>& row : result) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}
