using namespace std;
#include <iostream>
#include <math.h>
#define EPS 1e-8
int main() {
    double max,min;
    double maxrt, minrt;
    cin >> min >> max;
    minrt = ceil(cbrt(sqrt(min))-EPS);
    maxrt = floor(cbrt(sqrt(max))+EPS);
    //if(min == 1)
        //minrt--;
    cout /*<< maxrt << ' ' << minrt << ' '*/ << maxrt- minrt + 1 ;
    return 0;
}