#include <cstdio>

int main() {
    char s[100];
    int cnt[26] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int i;

    scanf("%s",s);

    for(i=0;s[i]>=97&&s[i]<=122;i++) {
        if(cnt[s[i]-97] == -1)
            cnt[s[i]-97] = i;
    }
        
    
    for(i=0;i<26;i++)
        printf("%d ",cnt[i]);
    
    return 0;
}