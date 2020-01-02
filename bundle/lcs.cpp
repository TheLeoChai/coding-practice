#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];
int N, M;
int n[1005];
int m[1005];

int main(){
    cin >> N >> M;
    for(int i=1;i<=N;i++)
        cin >> n[i];
    for(int i=1;i<=M;i++)
        cin >> m[i];
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            dp[i][j] = max(dp[i-1][j-1] + (n[i]==m[j]),max(dp[i-1][j],dp[i][j-1]));
            //cout << dp[i][j];
        }
    }
    cout << dp[N][M];
}