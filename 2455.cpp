#include <cstdio>

int main() {
    int i, hacha, seungcha, current = 0, maxpeople = 0;

    for(i=0;i<4;++i) {
        scanf("%d %d",&hacha,&seungcha);
        current -= hacha;
        current += seungcha;
        maxpeople = (current > maxpeople) ? current : maxpeople;
    }

    printf("%d",maxpeople);

    return 0;
}