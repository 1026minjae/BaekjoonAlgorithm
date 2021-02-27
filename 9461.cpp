#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int T, N, i, j, start = 5;
    long long pn[100] = {1,1,1,2,2,};
    vector<long long> answers;

    scanf("%d",&T);

    for(j=0;j<T;++j) {
        scanf("%d",&N);

        for(i=start;i<=N-1;++i)
            pn[i] = pn[i-5] + pn[i-1];
        
        start = (start < N) ? N : start;
        answers.push_back(pn[N-1]);
    }
    
    for(j=0;j<T;++j) {
        printf("%lld\n",answers[j]);
    }

    return 0;
}