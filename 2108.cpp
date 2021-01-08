#include <cstdio>
#include <cmath>
#include <algorithm>

int main() {
    int N, i, sum = 0;
    int maxn = -4000, minn = 4000;
    int maxoften = 0, firstnum, secondnum = -4001;
    int temp;
    short nums[500000];
    int often[8001] = {0, };

    scanf("%d",&N);
    for(i=0;i<N;i++) {
        scanf("%d",&temp);
        nums[i] = temp;
        sum += temp;
        often[4000+temp] += 1;
        if(temp > maxn) maxn = temp;
        if(temp < minn) minn = temp;
    }

    maxoften = often[4000+maxn];
    firstnum = maxn;
    for(i=maxn-1;i>=minn;i--) {
        if(often[4000+i] == maxoften) {
            secondnum = firstnum;
            firstnum = i;
        }
        else if(often[4000+i] > maxoften) {
            secondnum = -4001;
            firstnum = i;
            maxoften = often[4000+i];
        }
    }

    std::sort(nums, nums+N);

    printf("%d\n",(int)round((float)sum/N));
    printf("%d\n",nums[N/2]);
    printf("%d\n",(secondnum == -4001)?firstnum:secondnum);
    printf("%d",maxn-minn);

    return 0;
}
