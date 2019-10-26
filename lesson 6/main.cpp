using namespace std;
#include <iostream>
#include <string>

int main() {
    string inp, ans;
    int n;

    cin >> inp >> n;
    ans = inp.substr(0,n);
    for(int i=0;i<inp.length()-n+1;i++){
        if(inp.substr(i,n) < ans){
            ans = inp.substr(i,n);
        }
    }
    cout << ans;
    return 0;
}