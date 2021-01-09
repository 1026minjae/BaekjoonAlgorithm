#include <cstdio>

int main() {
    int N, M, i, j, k, maxsum = -300000;
    int cards[100];

    scanf("%d %d",&N,&M);
    for(i=0;i<N;i++) {
        scanf("%d",&cards[i]);
    }

    for(i=0;i<N-2;i++) {
        for(j=i+1;j<N-1;j++) {
            for(k=j+1;k<N;k++) {
                if(maxsum < cards[i] + cards[j] + cards[k] && cards[i] + cards[j] + cards[k] <= M)
                    maxsum = cards[i] + cards[j] + cards[k];
            }
        }
    }

    printf("%d",maxsum);

    return 0;
}