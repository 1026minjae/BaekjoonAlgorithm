#include <cstdio>
#include <vector>

using namespace std;

int SET = 0;
char oper[12];

int readnum(int index) {
    int res = 0;
    while(oper[index] != '\n' || oper[index] != '\0')
        res = res * 10 + oper[index++] - 48;
    return res;
}

int main() {
    int M, i, x;
    vector<char> answers;

    scanf("%d",&M);
    answers.reserve(M);

    for(i=0;i<M;++i) {
        fflush(stdin);
        fgets(oper,12,stdin);

        switch(oper[0]) {
            case 'a': // add, all
                if(oper[1] == 'd') { // add
                    x = readnum(4);
                    SET = SET | (1 << x);
                }
                else { // all
                    SET = 0b111111111111111111110;
                }
                break;
            case 'c': // check
                x = readnum(6);
                answers.push_back((SET >> x)&1);
                break;
            case 'e': // empty
                SET = 0;
                break;
            case 'r': // remove
                x = readnum(7);
                SET = ~(~SET | (1 << x));
                break;
            case 't': // toggle
                x = readnum(7);
                SET = SET ^ (1 << x);
                break;
        }
    }

    for(i=0;i<answers.size();++i)
        printf("%d\n",answers[i]);
    
    return 0;
}