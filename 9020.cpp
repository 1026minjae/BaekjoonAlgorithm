#include <iostream>
#include <vector>

using namespace std;

int che[10001] = {0, };
int answers[10000][2];

int main() {
    int T, n, i, j, k;
    int fro, hind, wall=0;
    

    che[1] = 1;

    cin >> T;
    
    for(k=0; k<T; k++) {
        cin >> n;
        if(n==4) {
            answers[k][0] = 2;
            answers[k][1] = 2;
            continue;
        }

        if(n > wall) {
            for(i = 2; i*i < n+1; i++) {
                if(che[i]==1) 
                    continue;
                for(j = i*i; 0 < j && j < n+1; j += i) {
                    che[j]=1;
                }
            }
            wall = n;
        }

        fro = n/2;
        if(fro%2==0) fro--;

        for(; fro>2; fro-=2) {
            hind = n - fro;
            if(che[fro]==0)
                if(che[hind]==0)
                    break;
        }
        answers[k][0] = fro;
        answers[k][1] = hind;
    }

    for(i=0;i<T;i++)
        cout << answers[i][0] << " " << answers[i][1] << endl;
    return 0;
}