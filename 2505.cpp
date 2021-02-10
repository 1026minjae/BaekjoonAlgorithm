#include <cstdio>
#include <vector>
#include <utility>

using namespace std;

int main() {
    int N, i, temp;
    int nums[10000];
    vector< pair<int,int> > tokens;
    bool flag = false;

    scanf("%d",&N);
    for(i=0;i<N;++i) {
        scanf("%d",&nums[i]);
        if(nums[i] != i+1) {
            if(!flag) { // token start
                flag = true;
                temp = i+1;
            }
            else if(nums[i-1] - nums[i] > 1 || nums[i-1] - nums[i] < -1) { //token end & another token start
                tokens.push_back(pair<int,int>(temp,i));
                temp = i+1;
            }
        }
        else if(flag) { // token end
            flag = false;
            tokens.push_back(pair<int,int>(temp,i));
        }
    }

    switch(tokens.size()) {
        case 0:
            printf("1 1\n2 2");
            break;
        case 1:
            printf("1 1\n%d %d",tokens[0].first,tokens[0].second); // ex 1 [5 4 3 2] 6
            break;
        case 2:
            if(nums[tokens[0].first-1] < nums[tokens[0].second-1]) //ex 1 [4 5] [3 2] 6
                printf("%d %d\n%d %d",tokens[0].first,tokens[0].second,tokens[0].first,tokens[1].second);
            else if(nums[tokens[1].first-1] < nums[tokens[1].second-1]) //ex 1 [5 4] [2 3] 6
                printf("%d %d\n%d %d",tokens[1].first,tokens[1].second,tokens[0].first,tokens[1].second);
            else if(nums[tokens[0].second-1] - nums[tokens[1].first-1] == 2) //ex 1 2 [5] 4 [3] 6 or 1 [6 5] 4 [3 2]
                printf("1 1\n%d %d",tokens[0].first,tokens[1].second);
            else //ex [2 1] 3 4 [6 5]
                printf("%d %d\n%d %d",tokens[0].first,tokens[0].second,tokens[1].first,tokens[1].second);
            break;
        case 3:
            break;
        case 4:
            break;
    }
    
    return 0;
}