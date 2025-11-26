class Solution {
public:
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m, vector<int>(k, 0)));
        dp[0][0][grid[0][0]%k]=1;
        int MOD = 1000000007;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                for(int r=0;r<k;r++){
                    if(i==0 && j==0)continue;
                    int val=grid[i][j];
                    if(i > 0)
                        dp[i][j][(r + val) % k] = 
                        (dp[i][j][(r + val) % k] + dp[i-1][j][r]) % MOD;

                    if(j > 0)
                        dp[i][j][(r + val) % k] = 
                        (dp[i][j][(r + val) % k] + dp[i][j-1][r]) % MOD;
                }
            }
        }
        
        return dp[n-1][m-1][0];
    }
};