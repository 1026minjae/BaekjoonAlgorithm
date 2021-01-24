#include <cstdio>

char s[1000005];

int main() {
    int i, cnt = 0;

    scanf("%s",s);

    if(s[0] == '\0' || s[1] == '\0')
        printf("0\n");
    else {
        for(i=1;s[i]!='\0';++i) {
            if(s[i-1]!=s[i])
                ++cnt;
        }
        printf("%d",(cnt+1)/2);
    }

    return 0;
}