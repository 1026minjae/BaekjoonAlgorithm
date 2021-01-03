#include <cstdio>

int main() {
    int N, temp_sc, max_sc = 0, sum = 0, i;
    float avg;

    scanf("%d",&N);

    for(i=0;i<N;i++) {
        scanf("%d",&temp_sc);
        if(max_sc < temp_sc)
            max_sc = temp_sc;
        sum += temp_sc;
    }

    avg = (float)sum / max_sc * 100 / N;

    printf("%f",avg);

    return 0;
}