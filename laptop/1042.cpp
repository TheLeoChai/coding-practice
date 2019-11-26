    #include <bits/stdc++.h>

    using namespace std;
    int a[100];
    int n,m,mx,mn,mid;

    bool can(){
        int var = 0;
        for(int i=0;i<n;i++){
            //cout << a[i] << ' ' << mid << endl;
            var+= mid-a[i];
            if(mid-a[i] < 0){
                return true;
            }
        }
        if(var >= m/*+(m-(m%n))*/){
            //cout << var << ' ' << m << endl;
            return false;}
        else{
            //cout << var << ' ' << m << endl;
            return true;}
    }

    int main() {
        cin >> n >> m;
        //cout << m << endl;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int temp = a[0];
        for(int i=0;i<n;i++){
            if(a[i]>temp){
                temp = a[i];
            }
        }
        mx = temp+m;
        mn = temp-1;

        //cout << mn << ' ' << mx << endl;

        while(mx-mn>1){
            mid = (mx+mn)/2;
            //cout << mn << ' ' << mid << ' ' << mx << endl;
            if(can()){
                mn=mid;
            }
            else
                mx=mid;
        }

        //cout << mn << ' ' << mx << endl;
        cout << mx << ' ' << temp+m << endl;
        return 0;
    }
