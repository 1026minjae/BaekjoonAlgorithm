#include <cstdio>
#include <algorithm>
#include <utility>

using namespace std;

bool compare(pair<int,int> &a, pair<int,int> &b) {
    return ((a.second < b.second) ? true : (a.first < b.first));
}

int main() { // segment fault
    int N, i;
    pair<int,int> *points;

    scanf("%d",&N);

    points = new pair<int,int>[N];

    for(i=0;i<N;i++) {
        scanf("%d %d",&(points[i].first),&(points[i].second));
    }

    sort(points,points+N,compare);

    for(i=0;i<N;i++) {
        printf("%d %d\n",points[i].first,points[i].second);
    }

    delete [] points;
    return 0;
}