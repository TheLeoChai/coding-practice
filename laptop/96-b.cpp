using namespace std;
#include <bits/stdc++.h>

long long n, a, temp, x, c7, c4;

int main(){
    a=10000000000;
    cin >> n;
    x=0;
    for(int i = 1; i<=10; i++){
        for(int j = 0; j< (1LL << i); j++){
            temp = 0;
            c4=0;
            c7=0;
            for (int k = 0;k < i;k++) {
                //cout << temp << endl;
                temp *= 10;
                if (j & (1 << k)) {
                    temp += 7;
                    c7++;
                } else {
                    temp += 4;
                    c4++;
                }
                if (c4 == c7 && temp >= n && temp < a) {
                    a=temp;
                }
            }
        }
        x=0;
    }
    cout << a;
    return 0;
}