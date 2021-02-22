#include <cstdio>

int N;
char filenames[50][51];
char pattern[50];

bool allsame(int index) {
    int i;
    char ch = filenames[0][index];
    bool flag = true;
    for(i=1;i<N;++i) {
        if(filenames[i][index] != ch) {
            flag = false;
            break;
        }
    }
    return flag;
}

int main() {
    int i;

    scanf("%d",&N);
    for(i=0;i<N;++i)
        scanf("%s",filenames[i]);
    
    for(i=0;filenames[0][i]!='\0';++i) {
        if(allsame(i)) 
            pattern[i] = filenames[0][i];
        else
            pattern[i] = '?';
    }
    pattern[i] = '\0';

    printf("%s",pattern);

    return 0;
}