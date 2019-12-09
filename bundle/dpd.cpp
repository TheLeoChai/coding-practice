#include <bits/stdc++.h>
using namespace std;

int N, W;
int v[105];
int w[105];
int dp[100005][105];
int T = 0;

int main() {
    cin >> N >> W;
    for (int i = 1; i <= N; i++) {
        cin >> w[i] >> v[i];
        T+= v[i];
    }
    memset(dp,0x3f,sizeof(dp));
    dp[0][0] = 0;
    for (int j = 1; j <= N; j++) {
        for (int i = 0;i < v[j];i++)
            dp[i][j] = dp[i][j - 1];
        for (int i = v[j];i <= T;i++)
            dp[i][j] = min(dp[i][j - 1], dp[i - v[j]][j - 1] + w[j]);
        //cout << endl;
    }
    int val = 0;
    for(int i=0;i<=T;i++){
        if(dp[i][N] <= W){
            val = max(val, i);
        }
    }
    cout << val;
    return 0;
}