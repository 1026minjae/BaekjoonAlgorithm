#include <cstdio>
#include <vector>

using namespace std;

int N, M;
vector<int> nums;

void backtrack(int level) {
    int i;
    if(level == M) {
        for(i=0;i<M;++i)
            printf("%d ",nums[i]);
        printf("\n");
    }
    else {
        i = (nums.size() > 0) ? nums.back() + 1 : 1;
        for(;i<=N;++i) {
            nums.push_back(i);
            backtrack(level+1);
            nums.pop_back();
        }
    }
}

int main() {
    int i;

    scanf("%d %d",&N,&M);

    backtrack(0);

    return 0;
}