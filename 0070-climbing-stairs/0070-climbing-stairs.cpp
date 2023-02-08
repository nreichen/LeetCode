class Solution {
public:
    int climbStairs(int n) {
        vector<int> memo(n + 2);
        if (n <= 2) return n;
        memo[1] = 1;
        memo[2] = 2;
        
        for (int i = 3; i <= n; i++) {
            memo[i] = memo[i - 1] + memo[i - 2];
        }
        return memo[n];
    }
};