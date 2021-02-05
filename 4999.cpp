#include <cstdio>
#include <cstring>

int main() {
    char s1[1001];
    char s2[1001];

    scanf("%s",s1);
    scanf("%s",s2);

    if(strlen(s1) >= strlen(s2))
        printf("go");
    else
        printf("no");
    
    return 0;
}