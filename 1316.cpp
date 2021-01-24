#include <cstdio>

int main() {
    int N, i, j, anscnt = 0;
    bool flag = false;
    bool alpha[26] = {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false};
    char curr;
    char word[105];

    scanf("%d",&N);
    for(i=0;i<N;++i) {
        for(curr=0;curr<26;++curr)
            alpha[curr] = false;
        flag = false;

        scanf("%s",word);
        curr = word[0];
        alpha[curr - 97] = true;

        for(j=1;word[j]!='\0';++j) {
            if(word[j] != curr) {
                if(alpha[word[j] - 97]) {
                    flag = true;
                    break;
                }
                curr = word[j];
                alpha[curr - 97] = true;
            }
        }

        if(!flag)
            ++anscnt;
    }   

    printf("%d",anscnt);

    return 0;
}