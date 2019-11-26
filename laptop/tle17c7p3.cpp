#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, y, z;
    double x, temp;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> y >> z;
        double max = 10;
        double min = 1;
        while( max-min > 1e-6){
            x = (max + min)/2;
            temp = x;
            for(int j=0; j<y-1;j++){
                if(temp > z)
                    break;
                temp = pow(x,temp);
            }
            if(temp <= z){
                min = x;
            }
            else if(temp > z){
                max = x;
            }
        }
        cout << min <<"\n";
    }
}