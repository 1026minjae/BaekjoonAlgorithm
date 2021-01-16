#include <cstdio>

int main() {
    int N, K, i, cnt = 0, cnt2, cursor;
    int *people;
    
    scanf("%d %d",&N,&K);

    people = new int[N];

    for(i=0;i<N;i++)
        people[i] = i+1;
    
    cursor = K-1;
    
    printf("<");
    while(true) {
        printf("%d",people[cursor]);
        people[cursor] = 0;
        
        if(++cnt >= N)
            break;
        printf(", ");

        for(cnt2 = 0; cnt2 < K;) {
            cursor = (cursor + 1) % N;
            if(people[cursor] != 0) ++cnt2;
        }
    }
    printf(">");

    delete [] people;
    return 0;
}