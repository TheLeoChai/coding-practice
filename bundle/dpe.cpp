#include <bits/stdc++.h>
using namespace std;

int N, W;
long long dp[100005][105];
int w[105];
int v[105];
int T = 0;
int temp = 0;

int main(){
    cin >> N >> W;
    for(int i=1; i <= N; i++){
        cin >> w[i] >> v[i];
        T+=v[i];
    }
    memset(dp,0x3f,sizeof(dp));
    dp[0][0] = 0;
    for(int i=1; i<=N; i++){
        for(int j=0; j<v[i]; j++)
            dp[i][j] = dp[i-1][j];
        for(int j=v[i]; j<=T; j++){
            dp[i][j] = min(dp[i-1][j], dp[i-1][j-v[i]] + w[i]);
        }
    }

    for(int i=0; i<=T; i++){
        if(dp[N][i] <= W)
            temp = max(temp, i);
    }
    cout << temp;
    return 0;
}