#include <bits/stdc++.h>
using namespace std;

string str;

int loc(int n){
    return n*2-2;
}

int leng(string strr){
    return (strr.length()-1)/2+1;
}

string proc(int b){
    if(str[loc(b)] == '-') return proc(b+1) + ' '+ proc(b + leng(proc(b+1)) +1) + ' ' +  '-';

    else if(str[loc(b)] == '+') return proc(b+1) + ' ' + proc(b + leng(proc(b+1))+1) + ' ' +  '+';

    else return str.substr(loc(b),1);
}

int main(){
    while(str != "0"){
        getline(cin, str);
        if(str != "0") cout << proc(1) << endl;
    }
}