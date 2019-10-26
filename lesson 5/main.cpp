#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main() {
    string str1, str2;
    int count = 0;
    int sum = 0;
    int arr[26]={0};
    cin >> str1 >> str2;
    for(int i=0;i<str1.size();i++){
        arr[str1[i]-'a']++;
    }
    for(int i=0;i<str2.size();i++){
        arr[str2[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        sum +=  abs(arr[i]);
    }
    cout << sum;
    return 0;
}