#include <cstdio>

int digit_sum(int n) {
    int sum = 0;
    while(n>0) {
        sum += n % 10;
        n /= 10;
    }   
    return sum;
}

int main() {
    int N, i, res = 0;
    
    scanf("%d",&N);

    for(i=1;i<N;i++) {
        if(i + digit_sum(i) == N) {
            res = i;
            break;
        }
    }

    printf("%d",res);
    return 0;
}