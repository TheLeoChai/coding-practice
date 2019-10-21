#include <iostream>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    int s1 = str1.size(),s2 = str2.size();
    int points = 0;
    bool stat;
    for(int i=0; i<s2; i++){
        if(str2[i] == '*'){
            points++;
            str2[i]=0;
        }
    }//change * to blank and add initial points
    if(points!=0){
        stat=true;
    }
    for(int j=0; j<s2; j++){
        for(int i=0;i<s1;i++){
            if(str2[j]==str1[i]&&str2[j]!=0){
                points++;
                str2[j]=0;
                str1[i]=0;
                //cout << points << endl << str1 << endl << str2 << endl;
            }
        }
    }//compare the strings
    if(stat&&points==s2&&s1==s2){
        cout << 'A';
    }
    else{
        cout << 'N';
    }
    //cout << points << endl << str1 << endl << str2;

    return 0;
}