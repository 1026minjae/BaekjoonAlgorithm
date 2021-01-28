#include <cstdio>
#include <vector>

using namespace std;

int N, M;
vector<int> nums;

bool contains(int n) {
    int i;
    for(i=0;i<nums.size();++i) {
        if(nums[i] == n) {
            return true;
        }
    }
    return false;
}

void backtrack(int level) {
    int i;
    if(level == M) {
        for(i=0;i<M;++i)
            printf("%d ",nums[i]);
        printf("\n");
    }
    else {
        for(i=1;i<=N;++i) {
            if(!contains(i)) {
                nums.push_back(i);
                backtrack(level+1);
                nums.pop_back();
            }
        }
    }
}

int main() {
    int i;

    scanf("%d %d",&N,&M);

    backtrack(0);

    return 0;
}