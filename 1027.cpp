#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int N, i, j, cnt, maxcnt = 0;
    vector<int> maxs;
    vector<int> maxindexs;
    int buildings[50];
    double incl;

    maxs.push_back(0);

    scanf("%d",&N);
    for(i=0;i<N;++i) {
        scanf("%d",&buildings[i]);
        if(maxs[0] < buildings[i]) {
            maxs.clear();
            maxindexs.clear();
            maxs.push_back(buildings[i]);
            maxindexs.push_back(i);
        }
        else if(maxs[0] == buildings[i]) {
            maxs.push_back(buildings[i]);
            maxindexs.push_back(i);
        }
    }

    for(j=0;j<maxs.size();++j) {
        cnt = 0;
        
        incl = maxs[j];
        for(i=maxindexs[j]-1;i>=0;--i) {
            if((double)(maxs[j] - buildings[i]) / (maxindexs[j] - i) < incl) {
                incl = (double)(maxs[j] - buildings[i]) / (maxindexs[j]-i);
                ++cnt;
            }
        }

        incl = maxs[j];
        for(i=maxindexs[j]+1;i<N;++i) {
            if((double)(maxs[j] - buildings[i]) / (i - maxindexs[j]) < incl) {
                incl = (double)(maxs[j] - buildings[i]) / (i - maxindexs[j]);
                ++cnt;
            }
        }

        maxcnt = (maxcnt < cnt) ? cnt : maxcnt;
    }

    printf("%d",maxcnt);

    return 0;
}