#include <bits/stdc++.h>
using namespace std;
/*
string inp, tempi, tempj, tempk, templ, tempm;
string tempstr[120];

string insert(char cha, string str, int n){ // char is charater inserted, str is the string to insert to n is position starting from 0
    if(n==0) return cha + str;
    else if(n==str.length()+1) return str + cha;
    else return str.substr(0,n) + cha + str.substr(n,str.length()-n);

}

int main(){
    int temp=0;
    cin >> inp;
    for(int i=0;i<1;i++){
        tempi = inp.substr(0,1);
        for(int j=0;j<2;j++){
            if(inp.length() < 2){
                tempstr[temp] = tempi;
                //cout << tempstr[temp] << endl;
                temp ++;
                break;
            }
            tempj = insert(inp[1],tempi,j);
            for(int k=0;k<3;k++){
                if(inp.length() < 3){
                    tempstr[temp] = tempj;
                    //cout << tempstr[temp] << endl;
                    temp ++;
                    break;
                }
                tempk = insert(inp[2],tempj,k);
                for(int l=0;l<4;l++){
                    if(inp.length() < 4){
                        tempstr[temp] = tempk;
                        //cout << tempstr[temp] << endl;
                        temp ++;
                        break;
                    }
                    templ = insert(inp[3],tempk,l);
                    for(int m=0;m<5;m++){
                        if(inp.length() < 5){
                            tempstr[temp] = templ;
                            //cout << tempstr[temp] << endl;
                            temp ++;
                            break;
                        }
                        tempm = insert(inp[4],templ,m);
                        tempstr[temp] = tempm;
                        //cout << tempstr[temp] << endl;
                        temp ++;
                    }
                }
            }
        }
    }
    //cout << temp;
    sort(tempstr,tempstr+temp);
    for(int i=0;i<temp;i++){
        cout << tempstr[i] << endl;
    }
    return 0;
}

*/
bool used[10];
string s;
void rec(string cur) {
    if (cur.size() == s.size()) {
        cout << cur << "\n";
        return;
    }
    for (int i = 0;i < s.size();i++) {
        if (!used[i]) {
            used[i] = true;
            rec(cur + s[i]);
            used[i] = false;
        }
    }
}
int main() {
    cin >> s;
    sort(s.begin(),s.end());
    rec("");
}