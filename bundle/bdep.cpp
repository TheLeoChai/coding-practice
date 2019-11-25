#include <bits/stdc++.h>
using namespace std;

int p,y;
long long t, temp,n;

long long run(){
    //cout << "--------------------------------" << endl;
    temp = 0;
    for(int i=0;i<y;i++){
        temp += n;
        //cout << temp << ' ' << 1.00+p/100.00 << ' ';
        temp = temp*(100+p)/100;
        //cout << temp << endl;
        if(temp >= t)
            return temp;
    }
    //cout << endl;
    return temp;
}


int main(){
    cin >> p >> y >> t;
    long long mn = 0;
    long long mx = ceil(t/y);
    while(mx > mn+1){
        n = (mn + mx)/2;
        //cout << mn << ' ' << mx << ' ' << n << endl;
        if(run() < t)
            mn=n;
        else
            mx=n;
    }
    cout << mx;
    return 0;
}

