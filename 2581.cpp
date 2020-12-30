#include <iostream>

using namespace std;

int che[10001] = {0, };

int main() {
    int M, N, i, j;
    int minPrime, sum=0;
    bool flag = false;
    cin >> M >> N;

    che[1]=1;
    for(i=4;i<=10000;i+=2)
        che[i]=1;
    for(i=3;i<10000;i+=2) {
        if(che[i]==1) continue;
        for(j=i*2;j<10000;j+=i)
            che[j]=1;
    }

    while(1) {
        if(M>N) 
            break;
        if(che[M]==0) {
            flag = true;
            minPrime = M;
            break;
        }
        M++;
    }
    
    if(flag) {
        for(i=M;i<=N;i++) {
            if(che[i]==0) {
                sum += i;
            }
        }
        cout << sum << "\n" << minPrime << endl;
    }
    else {
        cout << -1 << endl;
    }

    return 0;
}
    