#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int temp =1;
        for(int i=0;i<matrix.size();i++){
            for(int j = 0; j< matrix[0].size();j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;

                    if(i==0){
                        temp = 0;
                    }
                    else{
                        matrix[i][0]=0;
                    }
                }
            }
        }
        
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
                if(matrix[i][0]==0 | matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }

        if(matrix[0][0]==0){
            for(int i=0;i<matrix.size();i++){
                matrix[i][0]=0;
            }
        }

        if(temp == 0){
            for(int j =0 ; j< matrix[0].size();j++){
                matrix[0][j]=0;
            }
        }
    }
};

int main(){
    vector<vector<int>> matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};

    // Create an instance of the Solution class and run the setZeroes function
    Solution solution;
    solution.setZeroes(matrix);

    // Display the modified matrix
    for (const auto& row : matrix) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }
    return 0;
}