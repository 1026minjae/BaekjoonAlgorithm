#include <cstdio>

int main() {
    int n, i, j, m = 0;
    int nums[500];
    int sums[500];

    scanf("%d",&n);

    scanf("%d",&sums[0]);

    for(i=2;i<=n;++i) {
        for(j=0;j<i;++j)
            scanf("%d",&nums[j]);

        sums[i-1] = nums[i-1] + sums[i-2]; // last node in each level
        for(j=i-2;j>0;--j)
            sums[j] = nums[j] + ((sums[j] > sums[j-1]) ? sums[j] : sums[j-1]); // 2nd ~ one before last node
        sums[0] = nums[0] + sums[0]; //first node in each level
    }

    for(i=0;i<n;++i)
        m = (m < sums[i]) ? sums[i] : m;

    printf("%d",m);

    return 0;
}