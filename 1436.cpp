#include <cstdio>

bool has_666(int num) {
    bool flag = false;
    while(num>665) {
        if(num%1000 == 666) {
            flag = true;
            break;
        }
        num /= 10;
    }
    return flag;
}

int main() {
    int N;
    int cnt = 0, i=666;

    scanf("%d",&N);
    while(cnt!=N) {
        if(has_666(i++)) cnt++;
    }
    printf("%d",i-1);

    return 0;
}