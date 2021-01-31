#include <cstdio>

int main() {
    int N, i;
    unsigned int arr[1000000];

    arr[0] = 1; //N=1
    arr[1] = 2; //N=2

    scanf("%d",&N);

    for(i=2;i<=N-1;++i)
        arr[i] = (arr[i-2] + arr[i-1]) % 15746; // (i-2)+'00' + (i-1)+'1' // 모듈러 연산
    
    printf("%d",arr[N-1]);

    return 0;
}