#include <bits/stdc++.h>
using namespace std;
int n;
int inp[3][10005];
long long dp[3][100005];

long long day(int d, int p){
    if(d >= n-1){
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

int main(){
    memset(dp,-1,sizeof(dp));
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> inp[0][i] >> inp[1][i] >> inp[2][i];
    }
    cout << day(0,3);
    return 0;
}