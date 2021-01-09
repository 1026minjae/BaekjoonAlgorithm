#include <cstdio>
#include <algorithm>

int main() {
    int N, i;
    int *nums;

    scanf("%d",&N);

    nums = new int[N];

    for(i=0;i<N;i++)
        scanf("%d",&nums[i]);

    std::sort(nums,nums+N); //quick sort based. O(nlogn) 

    for(i=0;i<N;i++)
        printf("%d\n",nums[i]);

    delete [] nums;

    return 0;
}