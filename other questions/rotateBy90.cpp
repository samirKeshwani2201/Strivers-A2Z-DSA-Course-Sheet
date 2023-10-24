#include <bits/stdc++.h>
class Solution
{
public:
    // Not a good soln we want inplace soln
    void rotate(vector<vector<int>> &matrix)
    {
        vector<vector<int>> temp = matrix;
        int col2, row2;
        int n = matrix.size();
        for (int row = 0, col2 = n - 1; row < matrix.size(), col2 >= 0; row++, col2--)
        {
            for (int col = 0, row2 = 0; col < matrix.size(), row2 < n; col++, row2++)
            {
                matrix[row2][col2] = temp[row][col];
            }
        }
    }
};

/*
void rotate(vector<vector<int>>& matrix) {
        // complement of matrix
        int n = matrix.size();
        for(int i=0; i<n; ++i) {
            for(int j=i; j<n; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i=0; i<n; ++i) {
        // 2 Pointer approach :  just like we do in 1D array we take left and right pointers
        // and swap the values and then make those pointers intersect at some point.
            int left = 0, right = n-1;
            while(left < right) {
                swap(matrix[i][left], matrix[i][right]);
                ++left;
                --right;
            }
        }
    }
    */

/*
90: Transpose + Reverse Rows/Swap Col
180: Reverse Rows + Reverse columns
270 : Transpose + Reverse Columns
*/