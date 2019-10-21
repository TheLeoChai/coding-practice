#include <iostream>
using namespace std;

int main() {
    int n, max, min, inp;
    int cnt = 0;
    cin >> n >> min >> max;
    for(int i=0;i<n;i++){
        cin >> inp;
        if(inp <= max && inp >= min){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}