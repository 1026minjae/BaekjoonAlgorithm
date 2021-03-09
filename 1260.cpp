#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N;
vector<int> *connections;
queue<int> seq;
bool *visited;

void dfs(int node) {
    int i;
    visited[node-1] = true;
    printf("%d ",node);
    for(i=0;i<connections[node-1].size();++i) {
        if(visited[connections[node-1][i]-1]) continue;
        dfs(connections[node-1][i]);
    }
}

void bfs(int V) {
    int i, fro;
    
    seq.push(V);
    visited[V-1] = true;
    while(!seq.empty()) {
        fro = seq.front();
        for(i=0;i<connections[fro-1].size();++i) {
            if(visited[connections[fro-1][i]-1]) continue;
            seq.push(connections[fro-1][i]);
            visited[connections[fro-1][i]-1] = true;
        }
        printf("%d ",fro);
        seq.pop();
    }
}

int main() {
    int M, V, i, fro, hind;

    scanf("%d %d %d",&N,&M,&V);
    connections = new vector<int>[N];
    visited = new bool[N];
    for(i=0;i<M;++i) {
        scanf("%d %d",&fro,&hind);
        connections[fro-1].push_back(hind);
        connections[hind-1].push_back(fro);
    }

    for(i=0;i<N;++i) {
        sort(connections[i].begin(),connections[i].end());
        visited[i] = false;
    }

    dfs(V);
    printf("\n");

    for(i=0;i<N;++i) 
        visited[i] = false;

    bfs(V);
    printf("\n");

    delete [] visited;
    delete [] connections;
    return 0;
}