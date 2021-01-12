#include <cstdio>
#include <map>

using namespace std;

int main() {
    int N, M, i, j, temp;
    map<int,int> nums;

    scanf("%d",&N);
    for(i=0;i<N;i++) {
        scanf("%d",&temp);
        if(nums.find(temp) == nums.end())
            nums[temp] = 1;
        else
            nums[temp] += 1;
    }
    scanf("%d",&M);
    for(i=0;i<M;i++) {
        scanf("%d",&temp);
        if(nums.find(temp) == nums.end())
            printf("0 ");  
        else
            printf("%d ",nums[temp]);  
    }

    return 0;
}