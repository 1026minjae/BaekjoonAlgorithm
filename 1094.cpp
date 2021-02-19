#include <cstdio>

int main() {
    int X, cnt = 0;

    scanf("%d",&X);
    while(X > 0) {
        if(X&1) ++cnt;
        X = X >> 1;
    }

    printf("%d",cnt);

    return 0;
}