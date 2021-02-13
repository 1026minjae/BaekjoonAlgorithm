#include <cstdio>

int main() {
    int N, K, i, temp, res = 0;
    int coins[10];

    scanf("%d %d",&N,&K);
    for(i=0;i<N;++i)
        scanf("%d",&coins[i]);

    for(i=N-1;i>=0;--i) {
        res += K / coins[i];
        K = K % coins[i];
    }

    printf("%d",res);

    return 0;
}