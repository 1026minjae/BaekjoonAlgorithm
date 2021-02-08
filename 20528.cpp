#include <cstdio>

int main() {
    int N, i, j;
    char word[101];
    short cnt[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    scanf("%d",&N);

    for(i=0;i<N;++i) {
        scanf("%s",word);
        for(j=0;word[j]!='\0';++j);
        cnt[word[0]-97]++;
    }

    j=1;
    for(i=0;i<26;++i) {
        if(cnt[i] != 0 && cnt[i] != N) {
            j = 0;
            break;
        };
    }

    printf("%d",j);

    return 0;
}