#include <iostream>
#include <vector>

using namespace std;

//위상 정렬, 다이내믹 프로그래밍 응용
//1. 그래프로 표현하는데 방향을 반대로 바꿔서 저장한다.
//2. 그럼 W와 연결된 노드들만 보면 된다. 위상 정렬 방향이 반대로 생각하자.
//3. dp로 끝까지 더하고 모든 루트의 최댓값을 구하면 그게 답

vector<int> graph[1001]; //building maximum : 1000
int cost[1001];
int dp[1001] = {0, };

int ans;
vector<int> anslist;

void addCost(int n) {
    int s = graph[n].size();
    int element, loop;

    if(s==0) {
        if(ans<dp[n])
            ans=dp[n];
        return;
    }

    for(loop=0;loop<s;loop++) {
        element = graph[n][loop];
        if(dp[n]+cost[element] > dp[element])
            dp[element] = dp[n]+cost[element];
        addCost(element);
    }

    return;
}

int main() {
    int T, N, K, W;
    int loop, fro, hind;

    cin >> T;
    do {
        cin >> N >> K;
        for(loop = 1; loop <= N; loop++) {
            cin >> cost[loop];
        }
        for(loop = 0; loop < K; loop++) {
            cin >> fro >> hind;
            graph[hind].push_back(fro); //방향을 바꿔서 저장.
        }
        cin >> W;

        dp[W] = cost[W];
        addCost(W);

        anslist.push_back(ans);
        for(loop=1;loop<=N;loop++) {
            graph[loop].clear(); // 배열 초기화
            dp[loop]=0;
        }
        ans = 0;
    } while(--T!=0);

    for(loop=0;loop<anslist.size();loop++) {
        cout << anslist[loop] << endl;
    }

    return 0;
}
