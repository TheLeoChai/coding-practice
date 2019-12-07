#include <bits/stdc++.h>
using namespace std;

int N, W;
int v[105];
int w[105];
long long dp[100005][105];

int main() {
    cin >> N >> W;
    for (int i = 1; i <= N; i++) {
        cin >> w[i] >> v[i];
    }
    for (int j = 1; j <= N; j++) {
        for (int i = 0;i < w[j];i++)
            dp[i][j] = dp[i][j - 1];
        for (int i = w[j];i <= W;i++)
            dp[i][j] = max(dp[i][j - 1], dp[i - w[j]][j - 1] + v[j]);
    }
    cout << dp[W][N];
    return 0;
}