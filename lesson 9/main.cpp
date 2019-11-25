#include <iostream>

using namespace std;

int arr[100];

bool prime(int n){
    bool ans = true;
    //cout << ans << endl;
    if(n==1){
        ans = false;
    }
    arr[0] = 2;
    arr[1] = 3;
    int m = 5;
    int prs = 2;
    while(true){
        bool temp = true;
        for(int i=0;i<prs;i++){
            if(m%arr[i]==0){
                temp = false;
                break;
            }
        }
        if(temp){
            arr[prs]=m;
            prs++;
        }
        m++;
    }

    //cout << "ans is" << ans << endl;
    return ans;
}

int main() {
    int inp;
    int i = 0;
    cin >> inp;
    while(true){
       //cout << inp + i << endl;

        if(prime(inp+i)){
            //cout << inp + i << endl;
            break;
        }
        i++;
    }
    cout << inp + i;
    return 0;
}