#include <cstdio>

int main() {
    int i, j, cnt = 0;
    char words[5][16] = {{'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'},
                         {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'},
                         {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'},
                         {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'},
                         {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'}   };
    char res[75];

    for(i=0;i<5;++i)
        scanf("%s",words[i]);
    
    for(i=0;i<15;++i) {
        for(j=0;j<5;++j) {
            if(words[j][i] != '\0')
                res[cnt++] = words[j][i];
        }
    }
    res[cnt] = '\0';

    printf("%s",res);

    return 0;
}