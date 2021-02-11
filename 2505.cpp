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

    if(flag) { // token end
        tokens.push_back(pair<int,int>(temp,i));
    }

    /*
    for(i=0;i<tokens.size();++i) {
        printf("token #%d : [%d, %d]\n",i+1,tokens[i].first,tokens[i].second);
    }
    */

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
            else if(nums[tokens[0].second-1] - nums[tokens[1].first-1] == tokens[1].first - tokens[0].second) //ex 1 [6] 3 4 5 [2] or 1 [6 5] 4 [3 2]
                printf("%d %d\n%d %d",tokens[0].second+1,tokens[1].first-1,tokens[0].first,tokens[1].second);
            else //ex [2 1] 3 4 [6 5]
                printf("%d %d\n%d %d",tokens[0].first,tokens[0].second,tokens[1].first,tokens[1].second);
            break;
        case 3:
            if(nums[tokens[1].first-1] < nums[tokens[1].second-1]) //ex 1 [6 5] [3 4] [2]
                printf("%d %d\n%d %d",tokens[1].first,tokens[1].second,tokens[0].first,tokens[2].second);
            else if(nums[tokens[0].first-1] > nums[tokens[1].first-1]) //ex 1 [5] [2] 4 [3] 6 or [5 6] [1] 4 [3 2]
                printf("%d %d\n%d %d",tokens[0].first,tokens[1].second,tokens[0].first+tokens[1].second-tokens[0].second,tokens[2].second);
            else //ex 1 [5 4] [6] [2 3]
                printf("%d %d\n%d %d",tokens[1].first,tokens[2].second,tokens[0].first,tokens[1].first+tokens[2].second-tokens[1].second-1);
            break;
        case 4:
            if(tokens[0].second - tokens[1].first == -2) //ex [5 4] 3 [2] [6] [1]
                printf("%d %d\n%d %d",tokens[2].first,tokens[3].second,tokens[0].first,tokens[2].first+tokens[3].second-tokens[2].second);
            else if(tokens[1].second - tokens[2].first == -2) {
                if(tokens[1].second-tokens[1].first > tokens[2].second-tokens[2].first) //ex [2] [6 5] 4 [3] [1]
                    printf("%d %d\n%d %d",tokens[1].first,tokens[3].second,tokens[0].first,tokens[1].first+tokens[3].second-tokens[3].first);
                else //ex [6] [4] 3 [2 1] [5]
                    printf("%d %d\n%d %d",tokens[0].first,tokens[2].second,tokens[2].second+tokens[0].second-tokens[0].first,tokens[3].second);
            }
            else //ex [6] [1] [5] 4 [3 2]
                printf("%d %d\n%d %d",tokens[0].first,tokens[1].second,tokens[0].first+tokens[1].second-tokens[1].first+1,tokens[3].second);
            break;
        case 5:
            if(tokens[1].second - tokens[1].first < tokens[2].second - tokens[2].first) //ex [5 4] 3 [2] [9 8] 7 [6] [1]
                printf("%d %d\n%d %d",tokens[2].first,tokens[4].second,tokens[0].first,tokens[2].first+tokens[4].second-tokens[4].first);
            else //ex [9] [4] 3 [2 1] [8] 7 [6 5]
                printf("%d %d\n%d %d",tokens[0].first,tokens[2].second,tokens[2].second-tokens[0].second+tokens[0].first,tokens[4].second);
            break;
    }
    
    return 0;
}