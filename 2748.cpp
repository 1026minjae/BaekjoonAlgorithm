#include <cstdio>

int main() {
    int n, i;
    long long fibo[91] = {0, 1, };

    scanf("%lld",&n);
    for(i=2;i<=n;++i)
        fibo[i] = fibo[i-2] + fibo[i-1];
    
    printf("%lld",fibo[n]);

    return 0;
}