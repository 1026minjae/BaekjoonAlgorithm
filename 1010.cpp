#include <cstdio>
#include <vector>

using namespace std;

int vals[30][30];

int nck(int n, int k) { // 조합. 확률과 통계에 나오는 바로 그것
    if(vals[n][k] != 0)
        return vals[n][k];
    
    k = (n-k < k) ? n-k : k;
    if(n == k || k == 0) {
        vals[n][k] = 1;
    }
    else {
        vals[n][k] = nck(n-1,k-1) + nck(n-1,k);
    }

    return vals[n][k];
}

int main() {
    int T, N, M, i;
    vector<int> answers;

    for(N=0;N<30;++N)
        for(M=0;M<30;++M)
            vals[N][M] = 0;

    scanf("%d",&T);
    for(i=0;i<T;++i) {
        scanf("%d %d",&N,&M);
        answers.push_back(nck(M,N));
    }

    for(i=0;i<T;++i)
        printf("%d\n",answers[i]);
    
    return 0;
}