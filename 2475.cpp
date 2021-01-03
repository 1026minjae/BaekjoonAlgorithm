#include <cstdio>

int main() {
    int n1, n2, n3, n4, n5, n6;

    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);

    n6 = (n1*n1 + n2*n2 + n3*n3 + n4*n4 + n5*n5) % 10;

    printf("%d",n6);

    return 0;
}