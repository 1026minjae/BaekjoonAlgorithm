#include <cstdio>

int main() {
    int temp_n, max_n = 0, max_cnt, i;

    for(i=0;i<9;i++) {
        scanf("%d",&temp_n);
        if(temp_n > max_n) {
            max_n = temp_n;
            max_cnt = i+1;
        }
    }

    printf("%d\n%d",max_n,max_cnt);

    return 0;
}