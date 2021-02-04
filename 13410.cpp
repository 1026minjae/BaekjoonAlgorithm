#include <cstdio>

int reverse(int num) {
    int res = 0;
    while(num > 0) {
        res = 10 * res + num % 10;
        num /= 10;
    }
    return res;
}

int main() {
    int N, K, i, temp, maxn = 0;

    scanf("%d %d",&N,&K);

    for(i=1;i<=K;++i) {
        temp = reverse(N*i);
        maxn = (maxn < temp) ? temp : maxn; 
    }

    printf("%d",maxn);

    return 0;
}