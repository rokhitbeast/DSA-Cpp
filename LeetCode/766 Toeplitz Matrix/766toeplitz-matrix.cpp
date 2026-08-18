class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        // Check diagonals starting from first column
        for (int i = 0; i < m; i++) {
            int x = m-i-1, y = 0;
            int expected = matrix[x][y];
            while (x < m && y < n) {
                if (matrix[x][y] != expected)
                    return false;
                x++;
                y++;
            }
        }

        // Check diagonals starting from first row
        for (int j = 1; j < n; j++) {
            int x = 0, y = j;
            int expected = matrix[x][y];
            while (x < m && y < n) {
                if (matrix[x][y] != expected)
                    return false;
                x++;
                y++;
            }
        }

        return true; // if all diagonals are okay
    }
};
