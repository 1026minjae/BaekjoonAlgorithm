#include <cstdio>

int main() {
    int N, i, j, cnt = 0;
    int *arr;

    scanf("%d",&N);
    arr = new int[N];

    for(i=0;i<N;++i)
        arr[i] = 0;

    for(i=1;i<=N;++i) {
        for(j=1;j<=N;++j) {
            if(i*j <= N)
                arr[i*j-1] += 1;
        }
    }

    for(i=0;i<N;++i) {
        if(arr[i] % 2) 
            cnt += 1;
    }

    printf("%d",cnt);

    delete [] arr;
    return 0;
}