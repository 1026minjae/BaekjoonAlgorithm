#include <iostream>

using namespace std;

int main() {
    int X, cnt, bj, bm, i; //bunja, bunmo
    cin >> X;

    for(cnt = 0; X > (cnt+1)*(cnt+2)/2; cnt++);

    i = X - cnt*(cnt+1)/2 - 1;
    if(cnt%2 == 1) {
        bj = 1+i;
        bm = cnt+1-i;
    }
    else {
        bm = 1+i;
        bj = cnt+1-i;
    }

    cout << bj << "/" << bm << endl;

    return 0;    
}