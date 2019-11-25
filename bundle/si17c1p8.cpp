#include <bits/stdc++.h>
using namespace std;

int n,t;
int a[15];
int w = 0;

int main(){
    cin >> n >> t;
    for(int i=0;i<n;i++){
        cin >> a[i];
        //cout << a[i] << ' ';
    }
    //cout << endl;

    for(int i=0;i<(1<<n);i++){
        int val = 0;
        for(int k=0;k<n;k++){
            if(i&(1<<k)) val +=a[k];
        }
        if(val == t) w++;

    }
    cout << w;
    return 0;
}