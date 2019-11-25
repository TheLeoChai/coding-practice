#include <bits/stdc++.h>
using namespace std;

long long a, b, c, d, e, n;

long long f(int x){
    if(!x) return e;
    else return (a*f(x/b)+c*f(x/d))%1000000007;
}

int main(){
    cin >> a >> b >> c >> d >> e >> n;
    cout << f(n);
}