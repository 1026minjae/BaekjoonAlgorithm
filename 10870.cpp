#include <cstdio>

int fibo[21] = {0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

int get_fibo(int n) {
    if(fibo[n] == -1)
        fibo[n] = get_fibo(n-2) + get_fibo(n-1);
    return fibo[n];
}

int main() {
    int N;

    scanf("%d",&N);
    printf("%d",get_fibo(N));

    return 0;
}