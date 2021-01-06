#include <cstdio>

int main() {
    long long K, N, low = 1, mid, high = 0, i, res = 0;
    long long lines[10000] = {0, }; //max of K is 10000
    long long sum = 0;

    scanf("%d %d",&K,&N);
    for(i=0;i<K;i++) {
        scanf("%d",&lines[i]);
        if(high < lines[i])
            high = lines[i];
    }

    while(low <= high) { 
        mid = (low + high) / 2;
        sum = 0;
        for(i=0;i<K;i++) {
            sum += lines[i] / mid;
        }
        if(sum >= N) {
            low = mid + 1;
            res = (res < mid) ? mid : res;
        }  
        else
            high = mid - 1;
    }
    
    printf("%d", res);

    return 0;
}