#include <cstdio>

int main() {
    int N;
    short mode = 0; // 0 is first is excluding, 1 is first is going tail.
    int last, cnt = 1;
    
    scanf("%d",&N);

    last = N;

    while(N>1) {
        if(mode == 0) {
            if(N % 2 == 1) {
                last -= cnt;
                mode = 1;
                N /= 2;
            }
            else {
                //last is same
                //mode is same (0)
                N /= 2;
            }
        }
        else {
            if(N % 2 == 1) {
                //last is same
                mode = 0;
                N = N / 2 + 1;
            }
            else {
                last -= cnt;
                //mode is same (1)
                N /= 2;
            }
        }
        cnt *= 2;
    }

    printf("%d",last);

    return 0;
}