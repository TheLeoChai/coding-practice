#include <bits/stdc++.h>
using namespace std;
int n,k;
int h[1000000];
long long dp[1000000];

long long mindis(int pos){
    if(pos == n-1)
        dp[pos] = 0;
    else if(dp[pos] == 0x3f3f3f3f3f3f3f3f){
        long long temp = 0x3f3f3f3f3f3f3f3f;
        for(int i=1;i<=k;i++){
            if(pos+i > n-1)
                break;
            temp = min(abs(h[pos]-h[pos+i]) + mindis(pos+i),temp);
            //cout << temp << ' ' << pos << endl;
        }
        dp[pos] = temp;
        //cout << temp << endl;
    }
    return dp[pos];
}

int main(){
    memset(dp,0x3f,sizeof(dp));
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> h[i];
    }
    cout << mindis(0) << endl;
    /*for(int i=0;i<=n;i++){
        cout << h[i] << ' ';
    }*/
}