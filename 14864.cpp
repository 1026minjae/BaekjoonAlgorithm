#include <cstdio>

int main() {
    int N, M, i, fro, hind;
    int *nums;
    bool *flags;
    bool resflag = false;

    scanf("%d %d",&N,&M);

    nums = new int[N];
    flags = new bool[N];

    for(i=0;i<N;++i) {
        nums[i] = i+1;
        flags[i] = false;
    }

    for(i=0;i<M;++i) {
        scanf("%d %d",&fro,&hind);
        nums[fro-1] += 1;
        nums[hind-1] -= 1;
    }

    for(i=0;i<N;++i) {
        if(flags[nums[i]-1]) {
            resflag = true;
            break;
        }
        else {
            flags[nums[i]-1] = true;
        }
    }

    if(resflag)
        printf("-1");
    else
        for(i=0;i<N;++i)
            printf("%d ",nums[i]);
    
    delete [] flags;
    delete [] nums;
    return 0;
}