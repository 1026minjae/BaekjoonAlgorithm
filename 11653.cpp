#include <cstdio>

int che[10000001] = {0, };

int main() {
    int N, i, j, nextprime = 2;

    scanf("%d",&N);

    che[1]=1;
    for(i = 2; i*i < N+1; i++) {
        if(che[i]==1) 
            continue;
        for(j = i*i; 0 < j && j < N+1; j += i) {
            che[j]=1;
        }
    }

    while(N>1) {
        while(N % nextprime == 0) {
            printf("%d\n",nextprime);
            N /= nextprime;
        }
        for(;che[++nextprime]==1;);
    }

    return 0;
}