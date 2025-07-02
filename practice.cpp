class Solution {
public:
    int solve(int n, int m, vector<vector<int>>& grid) {
        vector<vector<int>> prev(m, vector<int>(m, 0));

        for (int j1 = 0; j1 < m; j1++) {
            for (int j2 = 0; j2 < m; j2++) {
                if (j1 == j2) prev[j1][j2] = grid[n-1][j1];
                else prev[j1][j2] = grid[n-1][j1] + grid[n-1][j2];
            }
        }

        for (int i = n - 2; i >= 0; i--) {
            vector<vector<int>> cur(m, vector<int>(m, 0));
            for (int j1 = 0; j1 < m; j1++) {
                for (int j2 = 0; j2 < m; j2++) {
                    int maxi = -1e9;
                    for (int dj1 = -1; dj1 <= 1; dj1++) {
                        for (int dj2 = -1; dj2 <= 1; dj2++) {
                            int nj1 = j1 + dj1;
                            int nj2 = j2 + dj2;
                            if (nj1 >= 0 && nj1 < m && nj2 >= 0 && nj2 < m) {
                                int val = 0;
                                if (j1 == j2) val = grid[i][j1];
                                else val = grid[i][j1] + grid[i][j2];
                                val += prev[nj1][nj2];
                                maxi = max(maxi, val);
                            }
                        }
                    }
                    cur[j1][j2] = maxi;
                }
            }
            prev = cur; 
        }

        return prev[0][m - 1];
    }
};
