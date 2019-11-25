#include <bits/stdc++.h>
using namespace std;

int x=0;
long long temp = 0;
int arr[32];
long long n, a1, a2;
long long a3 = 4444444444;

long long conv1(){
    long long ans = 0;
    long long ans2 = 0;
    long long c7 = 0;
    long long c4 = 0;
    for (int i = 0; i < 32; i++) {
        if (x&(1<<i)){
            arr[i] = 1;
            temp = i;
            //cout << "i is" << ' ' << i << endl;
        }
        else
            arr[i]=0;

    }
    for(int i=temp; i>=0;i--){
        //cout << arr[i] ;
        if(arr[i]==0){
            ans+=4*pow(10,i);
            c4++;
            //cout << ans << endl;
        }
        else{
            ans+=7*pow(10,i);
            c7++;
            //cout << ans << endl;
        }
    }

    if(c4==c7)
        return ans;
    else{
        ans2 = ans;
        int dig = 0;
        while(ans2){
            ans2/=10;
            dig++;
        }
        ans2 = ans;
        while(ans2<n){
            dig++;
            ans2+=4*pow(10,dig);
            c4++;
            if(c4==c7&&ans2<a3){
                a3=ans2;
            }
        }
        return 0;
    }

}

long long conv2(){
    long long ans = 0;
    long long c7 = 0;
    long long c4 = 0;
    for (int i = 0; i < 32; i++) {
        if (x&(1<<i)){
            arr[i] = 1;
            temp = i;
            //cout << "i is" << ' ' << i << endl;
        }
        else
            arr[i]=0;

    }
    for(int i=temp+1; i>=0;i--){
        //cout << arr[i] ;
        if(arr[i]==0){
            ans+=4*pow(10,i);
            c4++;
            //cout << ans << endl;
        }
        else{
            ans+=7*pow(10,i);
            c7++;
            //cout << ans << endl;
        }
    }
    if(c4==c7)
        return ans;
    else
        return 0;
}



int main(){
    bool v=true;
    cin >> n;
    x=0;
    while(conv1()<n){
        if(conv2()>=n&&v) {
            a1 = conv2();
            //cout << a1 << endl;
            v=false;
        }
        x++;
    }
    a2=conv1();
    //cout << a2 << endl;
    cout << min(a3,min(a1,a2));
    return 0;
}