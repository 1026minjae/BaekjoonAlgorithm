#include <cstdio>
#include <vector>

using namespace std;

int bat[50][50];
bool visited[50][50];
int T, M, N, K;

void setworm(int x, int y) {
    visited[x][y] = true;
    if(x-1 >= 0)
        if(!visited[x-1][y])
            if(bat[x-1][y] == 1)
                setworm(x-1,y);
    if(x+1 < M)
        if(!visited[x+1][y])
            if(bat[x+1][y] == 1)
                setworm(x+1,y);
    if(y-1 >= 0)
        if(!visited[x][y-1])
            if(bat[x][y-1] == 1)
                setworm(x,y-1);
    if(y+1 < N)
        if(!visited[x][y+1])
            if(bat[x][y+1] == 1)
                setworm(x,y+1);
    return;
}

int main() {
    int X, Y, t, i, j, cnt;
    vector<int> answers;

    scanf("%d",&T);

    for(t=0;t<T;++t) {
        scanf("%d %d %d",&M,&N,&K);
        for(i=0;i<M;++i) {
            for(j=0;j<N;++j) {
                bat[i][j] = 0;
                visited[i][j] = false;
            }
        }
        for(i=0;i<K;++i) {
            scanf("%d %d",&X,&Y);
            bat[X][Y] = 1;
        }
        cnt = 0;

        for(i=0;i<M;++i) {
            for(j=0;j<N;++j) {
                if(bat[i][j] == 1) {
                    if(!visited[i][j]) {
                        setworm(i, j);
                        ++cnt;
                    }
                }
            }
        }
        answers.push_back(cnt);
    }

    for(t=0;t<T;++t)
        printf("%d\n",answers[t]);

    return 0;
}