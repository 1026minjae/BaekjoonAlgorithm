#include <cstdio>
#include <algorithm>

using namespace std;

int A[100];
int B[100];

bool compare(int a, int b) {
    return a > b;
}

int main() {
    int N, S = 0, i;
    
    scanf("%d",&N);
    for(i=0;i<N;++i)
        scanf("%d",&A[i]);
    for(i=0;i<N;++i)
        scanf("%d",&B[i]);

    sort(A,A+N);
    sort(B,B+N,compare);

    for(i=0;i<N;++i)
        S += A[i] * B[i];
    
    printf("%d",S);
    
    return 0;
}