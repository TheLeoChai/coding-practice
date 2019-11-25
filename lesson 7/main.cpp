using namespace std;
#include <bits/stdc++.h>



struct Yod {
    int id,value,wor;

    bool operator<(Yod y) {
        if (value == y.value)
            return id < y.id;
        return value > y.value;
    }
};

Yod ppl[100];
int muap[100];

int main() {
    int n,k,a;
    cin >> n >> k;
    for(int i=0;i<100;i++){
        ppl[i].id = i;
        ppl[i].value = 0;
        ppl[i].wor = 1;
        muap[i]=i;
    }//initialize

    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            cin >> a;
            ppl[muap[j]].value += a;
            //cout << ppl[muap[j]].value << endl;
        }//add value

        sort(ppl,ppl + n);//sort

        int b = 0;
        for(int j=0;j<n;j++){
            if(ppl[j].wor < j) {
                ppl[j].wor = j - b;
                if(j!=0 && ppl[j].value == ppl[j-1].value){
                    b++;
                }
                //cout << b << endl;
            }
            muap[ppl[j].id] = j;
        }//find min
    }
    for(int i=0;i<n;i++){
        if(ppl[i].value == ppl[0].value)
            cout << "Yodeller " << ppl[i].id+1 << " is the TopYodeller: score " << ppl[i].value << ", worst rank " << ppl[i].wor+1-i << endl;

        else
            break;
    }
    return 0;
}