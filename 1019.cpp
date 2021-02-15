#include <cstdio>

int main() {
    int N, i, temp;
    int digit[10] = {0,0,0,0,0,0,0,0,0,0};

    scanf("%d",&N);

    for(i=1;i<=N;++i) {
        temp = i;
        while(temp > 0) {
            digit[temp%10] += 1;
            temp /= 10;
        }
    }

    for(i=0;i<10;++i)
        printf("%d ",digit[i]);
    return 0;
}