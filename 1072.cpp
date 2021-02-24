#include <cstdio>

int main() {
    unsigned int X, Y, Z, cnt;

    scanf("%d %d",&X,&Y);
    if(X == Y) {
        printf("-1");
    }
    else {
        Z = 100 * Y / X;
        for(cnt = 1; 100*(Y+cnt)/(X+cnt) != Z+1; ++cnt);
        printf("%d", cnt);
    }

    return 0;
}