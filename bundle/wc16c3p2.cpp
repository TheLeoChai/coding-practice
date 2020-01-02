#include <bits/stdc++.h>
using namespace std;

int n, m, a, b, v1, v2;
bool aiya;

vector<int> adj[2005];
bool been[2005];

void rec(int s){
    been[s] = true;
    for(int x:adj[s]){
        if (!been[x]) {
            rec(x);
        }
    }
}

int main(){
    cin >> n >> m >> a >> b;
    for(int i=1; i<=m; i++){
        cin >> v1 >> v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }

    rec(a);

    if(been[b])
        cout << "GO SHAHIR!";
    else
        cout << "NO SHAHIR!";
    return 0;
}