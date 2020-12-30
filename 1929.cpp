#include <cstdio>
//아니 무슨 c 문법으로 하니까 바로 통과하냐... cout이 느리구나...

int che[1000001] = {0, };

int main() {
    int M, N, i, j;
    scanf("%d%d",&M,&N);

    che[1]=1;
    for(i = 2; i*i < N+1; i++) {
        if(che[i]==1) 
            continue;
        for(j = i*i; 0 < j && j < N+1; j += i) {
            che[j]=1;
        }
    }

    for(i=M;i<=N;i++) {
        if(che[i]==0) {
            printf("%d\n",i);
        }
    }

    return 0;
}
    