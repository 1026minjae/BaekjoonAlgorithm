#include <stdio.h>
#include <stdlib.h>

//failed code

int main() {
    int ANS[1000];
    int T, N, K, fro, hind, goal;
    int i,j;
    int *D;
    short **ord;
    int *ans;

    scanf("%d", &T);

    for(i=0;i<T;i++) {
        scanf("%d %d",&N,&K);
        D = malloc(sizeof(int) * N); //int가 4바이트일 것 같긴한데 컴퓨터마다 다를 수도 있다고 들음
        ans = malloc(sizeof(int) * N);

        for(j=0;j<N;j++) {
            scanf("%d",&D[j]);
            ans[j]=D[j];
        }

        for(j=0;j<K;j++) {
            scanf("%d %d",&fro,&hind);
            if(ans[fro-1]+D[hind-1] > ans[hind-1])
                ans[hind-1] = ans[fro-1]+D[hind-1];
        }

        scanf("%d",&goal);
        ANS[i]=ans[goal-1];

        free(D);
        free(ans);
    }

    for(i=0;i<T;i++)
        printf("%d\n",ANS[i]);
    return 0;
}