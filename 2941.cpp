#include <cstdio>

int main() {
    int i, cnt = 0;
    char word[105];

    scanf("%s",word);

    for(i=0;word[i]!='\0';++i) {
        if(word[i] == 'c') {
            if(word[i+1] == '=') {
                ++i;
            }
            else if(word[i+1] == '-') {
                ++i;
            }
        }
        else if(word[i] == 'd') {
            if(word[i+1] == 'z') {
                if(word[i+2] == '=') {
                    i+=2;
                }
            }
            else if(word[i+1] == '-') {
                ++i;
            }
        }
        else if(word[i] == 'l') {
            if(word[i+1] == 'j') {
                ++i;
            }
        }
        else if(word[i] == 'n') {
            if(word[i+1] == 'j') {
                ++i;
            }
        }
        else if(word[i] == 's') {
            if(word[i+1] == '=') {
                ++i;
            }
        }
        else if(word[i] == 'z') {
            if(word[i+1] == '=') {
                ++i;
            }
        }
        ++cnt;
    }

    printf("%d",cnt);

    return 0;
}