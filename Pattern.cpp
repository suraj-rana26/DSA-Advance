#include <bits/stdc++.h>
using namespace std;

int stirling(int n, int k, vector<vector<int>>& dp) {

    if (n == 0 && k == 0)
        return 1;

    if (n == 0 || k == 0 || k > n)
        return 0;

    if (k == 1 || k == n)
        return 1;

    if (dp[n][k] != -1)
        return dp[n][k];

    return dp[n][k] =
        stirling(n-1, k-1, dp) +
        k * stirling(n-1, k, dp);
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> dp(n+1, vector<int>(k+1, -1));

    cout << stirling(n, k, dp);

    return 0;
}