#include <bits/stdc++.h>
using namespace std;

int dp[3005][3005];
int  o, l, c;
string n, m;
string str;

int main(){
    cin >> n >> m;
    for(int i=1;i<=n.length();i++){
        for(int j=1;j<=m.length();j++){
            dp[i][j] = max(dp[i-1][j-1] + (n[i-1]==m[j-1]),max(dp[i-1][j],dp[i][j-1]));
            //cout << dp[i][j];
        }
    }
    o=n.length();
    l=m.length();
    c = dp[o][l];
    while(c>0){
        if(dp[o-1][l-1] + (n[o-1]==m[l-1]) > max(dp[o-1][l], dp[o][l-1])){
            str = n[o-1] + str;
            o--;
            l--;
            c--;
        }
        else if(dp[o-1][l] > dp[o][l-1])
            o--;
        else
            l--;
    }
    cout << str;
}