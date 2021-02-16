#include <cstdio>

int N = 0;
int digit[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 5};

int getLines(long long num) {
    int tot = 0, cnt = 0;
    while(num > 0) {
        tot += digit[num % 10];
        num /= 10;
        ++cnt;
    }
    tot += 6*(N-cnt);
    return tot;
}


int main() {
    int tot = 0, temp;
    char number[16];
    long long num = 0, cut = 0, cnt = 0;

    scanf("%s",number);

    for(temp=0;number[temp]!='\0';++temp) {
        tot = tot + digit[number[temp]-48];
        num = num*10 + number[temp]-48;
        cut = cut*10 + 9;
    }

    N = temp;

    while(true) {
        ++cnt;
        num = (num == cut) ? 0 : num + 1;
        if(tot == getLines(num)) {
            break;
        }
    }

    printf("%d",cnt);

    return 0;
}