#include <cstdio>

int main() {
    int A, B, C, res;
    int cnt[10] = {0, };

    scanf("%d%d%d",&A,&B,&C);

    res = A*B*C;

    while(res) {
        cnt[res%10]++;
        res /= 10;
    }

    for(A=0;A<10;A++) {
        printf("%d\n",cnt[A]);
    }

    return 0;
}