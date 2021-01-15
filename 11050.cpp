#include <cstdio>

int factorial(int n) {
    return ((n == 0) ? 1 : n*factorial(n-1));
}

int main() {
    int N, K;

    scanf("%d %d",&N,&K);

    printf("%d", (factorial(N) / factorial(K) / factorial(N-K)));

    return 0;
}