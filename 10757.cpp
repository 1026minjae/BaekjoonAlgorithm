#include <cstdio>

int main() {
    int i, j, s, temp = 0;
    char first_num[10005];
    char second_num[10005];
    char result[10005];

    scanf("%s %s",first_num+1,second_num+1);
    first_num[0] = '0';
    second_num[0] = '0';

    for(i=1;first_num[i]!='\0';++i); //실제 숫자는 first_num+1부터 시작.
    for(j=1;second_num[j]!='\0';++j);
    s = (--i > --j) ? i : j;
    result[s+1] = '\0';

    for(;s>=0;--s) {
        result[s] = (temp + (first_num[i] - 48) + (second_num[j] - 48)) % 10 + 48;
        temp = (temp + (first_num[i] - 48) + (second_num[j] - 48)) / 10;
        if(i>0) --i;
        if(j>0) --j;
    }
    if(result[0] == '0')
        printf("%s",result+1);
    else
        printf("%s",result);

    return 0;
}