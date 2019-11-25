#include <bits/stdc++.h>
using namespace std;
int n,k;
int h[100000];
long long dp[100000];

long long mindis(int pos){
    if(pos == n-1)
        dp[pos] = 0;
    else if(dp[pos] == -1){
        if(pos+2 <= n)
            dp[pos] = min(abs(h[pos]-h[pos+1]) + mindis(pos+1), abs(h[pos]-h[pos+2]) + mindis(pos+2));
        else
            dp[pos] = abs(h[pos]-h[pos+1]) + mindis(pos+1);
    }
    return dp[pos];
}

int main(){
    memset(dp,-1,sizeof(dp));
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> h[i];
    }
    cout << mindis(0) << endl;
    for(int i=0;i<n;i++){
        cout << h[i] << ' ';
    }
}