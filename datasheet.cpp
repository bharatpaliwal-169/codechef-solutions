// https://stackoverflow.com/questions/66537932/what-is-the-subproblem-here-and-how-it-is-being-calculated

int mod = 1000000007;
    vector<vector<int>> dp(N+1, vector<int>(K+1, 0));
    for(int i = 0; i <= N; i++)
        dp[i][0] = 1;
        
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= K; j++)
        {
            dp[i][j] += dp[i-1][j];
            dp[i][j] %= mod;
            
            dp[i][j] += dp[i][j-1];
            dp[i][j] %= mod;
            
            if(j-M>0)
            {
                dp[i][j] = dp[i][j] - dp[i-1][j-M-1] + mod;
                dp[i][j] %= mod;
            }
        }
    }
    
    return dp[N][K];