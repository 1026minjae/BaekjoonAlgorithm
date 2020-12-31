#include <cstdio>
#include <cmath>

int main() {
    int A, B, V, day=0;

    scanf("%d %d %d",&A,&B,&V);

    printf("%d", (int)ceil((double)(V-A) / (A-B)) + 1);

    return 0;
}