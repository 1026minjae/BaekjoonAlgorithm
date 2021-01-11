#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int K, i, temp, sum = 0;
    vector<int> nums;

    scanf("%d",&K);

    for(i=0;i<K;i++) {
        scanf("%d",&temp);
        if(!temp)
            nums.pop_back();
        else
            nums.push_back(temp);
    }

    for(i=0;i<nums.size();i++) {
        sum += nums[i];
    }

    printf("%d",sum);

    return 0;
}