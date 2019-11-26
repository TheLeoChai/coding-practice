using namespace std;

#include <bits/stdc++.h>
int arr[26][1000000];
string str;
int n,q,i,j,bg,sm;
char c;
int main(){
    getline(cin,str);
    //cout << str << endl;
    for(int a=0;a<26;a++){
        int val = 0;
        for(int b=0;b<str.length()+1;b++){
            if(str[b]=='a'+a){
                val++;
            }
            arr[a][b+1] = val;
            cout << arr[a][b];
        }
        cout << endl;
    }
    cin >> q;
    //cout << q << endl;
    for(int a=0;a<q;a++){
        cin >> i >> j >> c;
        //cout << i << ' ' << j << ' ' << c << endl;
        sm = arr[c-'a'][j] - arr[c-'a'][i-1];
        cout << sm << endl;
    }

    return 0;
}

