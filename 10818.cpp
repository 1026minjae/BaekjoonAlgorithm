#include <cstdio>

int main() {
    int N, temp, i;
    int maxn=-1000000, minn=1000000;

    scanf("%d",&N);

    for(i=0;i<N;i++) {
        scanf("%d",&temp);
        if(temp > maxn)
            maxn = temp;
        if(temp < minn)
            minn = temp;
    }

    printf("%d %d",minn,maxn);

    return 0;
}