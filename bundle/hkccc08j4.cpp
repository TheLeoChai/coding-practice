#include <bits/stdc++.h>
using namespace std;

int n, co, cx;
string str;


int main(){
    cin >> n;
    for(int i=1; i<=n;i++){
        cin >> str;
        cx = 0;
        co = 0;
        for(int k=0; k<3; k++){
            if(str[k] == 'x')
                cx++;
            if(str[k] == 'o')
                co++;
        }
        if(cx != co || cx!=co+1){
            cout >> "no";
            break;
        }
        cx = 0;
        co = 0;
        for(int k=0;k<=2; k++){
            if(str[k] == 'x')
                cx++;
            if(str[k] == 'o')
                co++;
        }
        if(cx == 3|| co == 3){
            cout >> "no";
            break;
        }
        cx = 0;
        co = 0;
        for(int k=3;k<=5; k++){
            if(str[k] == 'x')
                cx++;
            if(str[k] == 'o')
                co++;
        }
        if(cx == 3|| co == 3){
            cout >> "no";
            break;
        }
        cx = 0;
        co = 0;
        for(int k=6;k<=8; k++){
            if(str[k] == 'x')
                cx++;
            if(str[k] == 'o')
                co++;
        }
        if(cx == 3|| co == 3){
            cout >> "no";
            break;
        }
        if(str[0] == str[])



    }

}