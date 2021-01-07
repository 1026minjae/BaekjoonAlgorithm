#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    int T, N, M, cnt, i, j;
    int queue[100];
    int priority[100];
    vector<int> answers;

    scanf("%d",&T);
    for(i=0;i<T;i++) {
        cnt = 0;
        scanf("%d %d",&N,&M);
        for(j=0;j<N;j++) {
            scanf("%d",&queue[j]);
            priority[j] = queue[j];
        }
        sort(priority,priority+N, compare);

        j = 0;
        while(1) {
            if(queue[j] == priority[cnt]) { //print
                cnt++;
                if(j == M) {
                    answers.push_back(cnt);
                    break;
                }
            }
            j = (j+1) % N;
        }
    }

    for(i=0;i<T;i++)
        printf("%d\n",answers[i]);

    return 0;
}