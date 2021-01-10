#include <cstdio>
#include <algorithm>

int main() {
    int N, M, H, sum = 0, i, j;
    int *trees;
    bool flag = false;

    scanf("%d %d",&N,&M);
    trees = new int[N];
    for(i=0;i<N;i++) {
        scanf("%d",&trees[i]);
    }

    std::sort(trees,trees+N);
    H = trees[N-1];

    for(i=N-1;i>0;i--) {
        sum += trees[i];
        if(trees[i] == trees[i-1])
            continue;
        while(H >= trees[i-1]) {
            if(sum - H * (N-i) >= M) {
                flag = true;
                break;
            }
            H--;
        }
        if(flag)
            break;
    }
    if(!flag) {
        sum += trees[0];
        while(H >= 0) {
            if(sum - H * N >= M) {
                break;
            }
            H--;
        }
    }

    printf("%d",H);

    return 0;
}