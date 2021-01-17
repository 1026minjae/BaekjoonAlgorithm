#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int N, M, B, i, sum = 0, sum2 = 0, temp; // sum = total blocks. sum2 = total blocks erased.
    int *blocks;
    int mintime = 200000000;

    scanf("%d %d %d",&N,&M,&B);

    blocks = new int[N*M];

    for(i=0;i<N*M;++i) {
        scanf("%d",&blocks[i]);
        sum += blocks[i];
    }

    sort(blocks, blocks + N*M);

    if(blocks[N*M-1]==blocks[0]) {
        mintime = 0;
        temp = 0;
    }
    else {
        i = N*M-1;

        while(true) {
            if(sum + B >= N*M*blocks[i]) { //평평하게 만들기 위해 필요한 블럭수를 만족하는가?
                if(mintime > 3 * sum2 + N*M*blocks[i] - sum) { // total time = 2 * sum2 + 1 * (N*M*blocks[i] - (sum-sum2))
                    mintime = 3 * sum2 + N*M*blocks[i] - sum;
                }
                else {
                    break;
                }
            }
            temp = i;

            if(blocks[i] == blocks[0])
                break;

            for(;blocks[i] == blocks[i-1];--i); // then, blocks[i] and blocks[i-1] have gap.
            sum2 += (temp-i+1) * (blocks[i] - blocks[i-1]);
            --i;
        }
    }

    printf("%d %d",mintime, blocks[temp]);

    delete [] blocks;
    return 0;
}