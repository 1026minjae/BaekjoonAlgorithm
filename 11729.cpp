#include <cstdio>
#include <cmath>

void hanoi(int n, int from, int by, int to) {
    if(n==1) {
        printf("%d %d\n", from, to);
        return;
    }
    else {
        hanoi(n-1, from, to, by);
        printf("%d %d\n", from, to);
        hanoi(n-1, by, from, to);
        return;
    }
}

int main() {
    int N;

    scanf("%d",&N);
    printf("%d\n",(int)pow(2.0,(double)N)-1);
    hanoi(N, 1, 2, 3);

    return 0;
}