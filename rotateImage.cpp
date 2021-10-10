//Rotate Image
// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[7,4,1],[8,5,2],[9,6,3]]

//Logic behind this is to transpose the given matrix and then reverse every row.

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

            for(int i=0;i<n;++i)
            {
                for(int j=0;j<i;++j)
                {
                    swap(matrix[i][j], matrix[j][i]);
                }
            }

            for(int i=0;i<n;i++)
            {
                reverse(matrix[i].begin(), matrix[i].end());
            }
    }
};
