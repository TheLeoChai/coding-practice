#include <iostream>
using namespace std;

int main() {
    int n, m = 0;
    cin >> n;
    cin >> m;
    int a[n];
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    a[0]=101;
    for (int i=1;i<=m;i++){
        int min = 0;
        for(int j=1;j<=n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }//finds min of the set
        cout << a[min] << endl;
        a[min]++;
    }
    return 0;
}