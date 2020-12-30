#include <iostream>

using namespace std;

int main() {
    int N, cnt;

    cin >> N;
    //1: 0x6+1, 2: 0x6+2~1x6+1
    for(cnt = 0; cnt*(cnt+1)*3 < N-1; cnt++);
    cout << 1+cnt << endl;

    return 0;
}