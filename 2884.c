#include <stdio.h>

int main() {
    int h, m;
    scanf("%d %d",&h,&m);

    if(m>=45) {
        m-=45;
    } else {
        h=(h+23)%24;
        m=m+15;
    }

    printf("%d %d",h,m);

    return 0;
}