class Solution {
public:
    int kInversePairs(int n, int k) {
        const int MOD = 1e9 + 7;
        vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
        for (int i = 0; i <= n; ++i) {
            dp[i][0] = 1;
        }
        for (int N = 1; N <= n; ++N) {
            for (int K = 1; K <= k; ++K) {
                for (int i = 0; i <= min(K, N - 1); ++i) {
                    dp[N][K] = (dp[N][K] + dp[N - 1][K - i]) % MOD;
                }
            }
        }

        return dp[n][k];
    }
};
static int fastio=[](){
    #define endl '\n'
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();