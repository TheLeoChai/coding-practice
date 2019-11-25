#include <bits/stdc++.h>
using namespace std;
int t, n;
int v = 0;
int main() {
    cin >> t >> n;
    int d[n], p[n];
    for(int i=0;i<n;i++){
        cin >> d[i];
    }
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    sort(d,d+n);
    sort(p,p+n);
    //cout << v << endl;
    for(int i=0;i<n;i++){
        //cout << d[n-i-1] << ' ' << p[n-i-1] << endl;
        if(t == 2){
            v+=max(d[i],p[n-i-1]);
            //cout << d[i] << ' ' <<p[n-i-1] << ' ' << v << endl;
        }
        else{
            v+=max(d[i],p[i]);
            //cout << d[i] << ' ' <<p[i] << ' ' << v << endl;
        }
    }
    cout << v;

    return 0;
}