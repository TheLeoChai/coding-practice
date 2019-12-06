#include <bits/stdc++.h>
using namespace std;
int n;
int inp[3][100005];
long long dp[3][100005];
/*
long long day(int d, int p){
    if(d >= n){
        dp[p%3][d] = 0;
        dp[(p+1)%3][d] = 0;
        dp[(p+2)%3][d] = 0;
    }
    if(p==3){
        dp[p%3][d] = inp[p%3][d] + day(d+1, p%3);
        dp[(p+1)%3][d] = inp[(p+1)%3][d] + day(d+1, (p+1)%3);
        dp[(p+2)%3][d] = inp[(p+2)%3][d] + day(d+1, (p+2)%3);
        return max(dp[p%3][d],max(dp[(p+1)%3][d], dp[(p+2)%3][d]));
    }
    if(dp[(p+1)%3][d]==-1)
        dp[(p+1)%3][d] = inp[(p+1)%3][d] + day(d+1, (p+1)%3);
    if(dp[(p+2)%3][d]==-1)
        dp[(p+2)%3][d] = inp[(p+2)%3][d] + day(d+1, (p+2)%3);

    return max(dp[(p+1)%3][d], dp[(p+2)%3][d]);
}
*/
int main(){
    memset(dp,-1,sizeof(dp));
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> inp[0][i] >> inp[1][i] >> inp[2][i];
        for(int j=0;j<3;j++){
            dp[j][i]= max(dp[(j+1)%3][i-1],dp[(j+2)%3][i-1]) + inp[j][i];
            if(i-1 == 0)
                dp[j][i] = 0 + inp[j][i];
        }
    }
    cout << max(dp[0][n],max(dp[1][n],dp[2][n]));
    return 0;
}