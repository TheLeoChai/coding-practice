#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

float med(int arr[], int m, int b, bool t){
    float med = 0;
    if(m%2==0){
        med = (arr[(m-1)/2+b]+arr[m/2+b])/2.0;
        //cout << arr[(m-1)/2+b] << ' ' << arr[m/2+b] << ' ' << m << ' ' << b << endl;
    }
    else {
        med = arr[(m/2)+b];
    }
    return med;
}
int main() {
    int n;
    float q1, q2, q3;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    q2 = med(a,n,0,false);
    q1 = med(a,n/2,0,false);
    if(n%2==0) {
        q3 = med(a, floor(n / 2.0), ceil(n / 2.0),false);
    }
    else{
        q3 = med(a, floor(n / 2.0), ceil(n / 2.0),true);
    }
   // q1 = med(a,)

    cout << a[0] << ' ' << a[n-1] << ' ' << q1 << ' ' << q2 << ' ' << q3;
    return 0;
}