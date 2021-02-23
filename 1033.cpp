#include <cstdio>
#include <vector>
#include <set>

using namespace std;

int gcd(int a, int b) {
    if(a < b) return gcd(b, a);
    return (a % b) ? gcd(b, a%b) : b;
}

int main() {
    int N, a, b, p, q, g, i, j, temp1, temp2;
    unsigned int amounts[10] = {1,1,1,1,1,1,1,1,1,1}; // 9^10 ~= 3.4x10^9. out of signed int range
    vector<int> connections[10];
    set<int> tempset;
    set<int>::iterator setiter;
    set<int>::iterator setiter2;

    scanf("%d",&N);

    for(i=0;i<N;++i)
        connections[i].push_back(i);
    
    for(i=0;i<N-1;++i) {
        scanf("%d %d %d %d",&a,&b,&p,&q);
        temp1 = amounts[b] * p;
        temp2 = amounts[a] * q;

        for(j=0;j<connections[a].size();++j)
            amounts[connections[a][j]] *= temp1;
        for(j=0;j<connections[b].size();++j)
            amounts[connections[b][j]] *= temp2;

        tempset.clear();
        for(j=0;j<connections[a].size();++j)
            tempset.insert(connections[a][j]);
        for(j=0;j<connections[b].size();++j)
            tempset.insert(connections[b][j]);

        for(setiter=tempset.begin();setiter!=tempset.end();++setiter) {
            connections[*setiter].clear();
            for(setiter2=tempset.begin();setiter2!=tempset.end();++setiter2) {
                connections[*setiter].push_back(*setiter2);
            }
        }
    }

    g = gcd(amounts[0], amounts[1]);
    for(i=2;i<N;++i)
        g = gcd(g, amounts[i]);

    for(i=0;i<N;++i)
        amounts[i] /= g;

    for(i=0;i<N;++i)
        printf("%d ",amounts[i]);

    return 0;
}