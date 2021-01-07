#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int N, M;
int givennums[100000];
vector<bool> results;

bool contains(int num) {
    int low = 0, mid, high = N-1;

    while(low<=high) {
        mid = (low + high) / 2;
        if(givennums[mid] == num) {
            return true;
        } 
        else if(givennums[mid] > num) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return false;
}

int main() {
    int i, temp;

    scanf("%d",&N);
    for(i=0;i<N;i++) {
        scanf("%d",&givennums[i]);
    }

    sort(givennums, givennums+N);

    scanf("%d",&M);
    for(i=0;i<M;i++) {
        scanf("%d",&temp);
        results.push_back(contains(temp));
    }

    for(i=0;i<M;i++) {
        printf("%d\n",(results[i])?1:0);
    }

    return 0;
}