#include <cstdio>

int main() {
    int i, tempnum = 0, result = 0;
    char expression[51];
    bool flag = false;

    scanf("%s",expression);

    for(i=0;expression[i]!='\0';++i) {
        if(expression[i] == '-') {
            if(flag) {
                result -= tempnum;
                tempnum = 0;
            }
            else {
                result += tempnum;
                tempnum = 0;
            }
            flag = true;
        }
        else if(expression[i] == '+') {
            if(flag) {
                result -= tempnum;
                tempnum = 0;
            }
            else {
                result += tempnum;
                tempnum = 0;
            }
        }
        else {
            tempnum = tempnum * 10 + expression[i] - 48;
        }
    }
    if(flag) {
        result -= tempnum;
        tempnum = 0;
    }
    else {
        result += tempnum;
        tempnum = 0;
    }

    printf("%d",result);

    return 0;
}