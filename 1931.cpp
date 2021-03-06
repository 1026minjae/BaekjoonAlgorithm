#include <cstdio>
#include <utility>
#include <algorithm>

using namespace std;

bool compare(pair<int,int> a, pair<int,int> b) {
    if(a.first > b.first)           return false;
    else if (a.first < b.first)     return true;
    else {
        if(a.second >= b.second)    return false;
        else                        return true;
    }
}

int main() {
    int N, i, j = 0, snd = 2147483647, end, tempcnt, cnt = 0;
    bool flag = false;
    pair<int,int> *arr;

    scanf("%d",&N);
    arr = new pair<int,int>[N];
    for(i=0;i<N;++i) {
        scanf("%d %d",&arr[i].first,&arr[i].second);
    }

    sort(arr,arr+N,compare);

    for(;arr[j].first<snd;) {
        snd = (arr[j].second < snd) ? arr[j].second : snd;
        end = arr[j].first;
        tempcnt = 0;
        flag = false;       

        for(i=j;i<N;++i) {
            if(!flag) {
                if(arr[i].first - arr[j].first == 1) {
                    j = i;
                    flag = true;
                }
            }
            if(arr[i].first >= end) {
                end = arr[i].second;
                tempcnt++;
            }
        }
        cnt = (cnt<tempcnt) ? tempcnt : cnt;
    }

    printf("%d",cnt);

    delete [] arr;
    return 0;
}