#include <bits/stdc++.h>
using namespace std;

long long n, m;
int k, c;


int main(){
    cin >> n >> k;
    m=n;
    //cout << "m is" << ' ' << m << endl;

    while(__builtin_popcount(n)>k){
        n++;
        //cout << "n is" << ' ' << n << endl;
    }
    cout << n-m;
    return 0;
}