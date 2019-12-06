using namespace std;

#include <bits/stdc++.h>

long long dp[36];
int locations[36];
int A,B,N;
int numOfLocations;

long long solve(int x) {
    if (x == 0)
        return 1;
    if (dp[x] != -1)
        return dp[x];

    dp[x] = 0;
    for (int i = 0;i < numOfLocations;i++) {
        if (locations[i] < locations[x] && locations[x] - locations[i] <= B &&
            locations[x] - locations[i] >= A)
            dp[x] += solve(i);
    }

    return dp[x];
}

int main() {
    memset(dp,-1,sizeof(dp));
    locations[0] = 0;
    locations[1] = 990;
    locations[2] = 1010;
    locations[3] = 1970;
    locations[4] = 2030;
    locations[5] = 2940;
    locations[6] = 3060;
    locations[7] = 3930;
    locations[8] = 4060;
    locations[9] = 4970;
    locations[10] = 5030;
    locations[11] = 5990;
    locations[12] = 6010;
    locations[13] = 7000;
    cin >> A >> B >> N;
    numOfLocations = 14+N;
    for(int i=0;i<N;i++){
        cin >> locations[14+i];
    }
    sort(locations,locations+N+14);
    cout << solve(N+13) << endl;
}