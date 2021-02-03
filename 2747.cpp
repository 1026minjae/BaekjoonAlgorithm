#include <cstdio>

int main() {
    int n, i;
    int fibo[50] = {0,1,};

    scanf("%d",&n);

    for(i=2;i<=n;++i)
        fibo[i] = fibo[i-1] + fibo[i-2];
    
    printf("%d",fibo[n]);

    return 0;
}