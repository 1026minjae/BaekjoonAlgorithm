#include <cstdio>

int gcd(int a, int b) {
    if(a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b, d, m;
    
    scanf("%d %d",&a,&b);

    d = (a > b) ? gcd(a, b) : gcd(b, a);
    m = a * b / d;

    printf("%d\n%d",d,m);

    return 0;
}