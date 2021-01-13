#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

char oper[15];

int readnum() {
    int i, num = 0;
    for(i=5;oper[i]!='\n';i++)
        num = num*10 + (oper[i]-48);
    return num;
}

int main() {
    int N, i;
    vector<int> stack;
    vector<int> res;

    scanf("%d\n",&N);

    for(i=0;i<N;++i) {
        fgets(oper, 13, stdin);

        if(oper[0] == 'p') {
            if(oper[1] == 'u') { // push
                stack.push_back(readnum());
            }
            else { // pop
                if(stack.empty())
                    res.push_back(-1);
                else {
                    res.push_back(stack[stack.size()-1]);
                    stack.pop_back();
                }
            }
        } 
        else if(oper[0] == 's') { // size
            res.push_back(stack.size());
        }
        else if(oper[0] == 'e') { // empty
            res.push_back((stack.empty())?1:0);
        }
        else { // top
            if(stack.empty())
                res.push_back(-1);
            else {
                res.push_back(stack[stack.size()-1]);
            }
        }
    }

    for(i=0;i<res.size();i++) {
        printf("%d\n", res[i]);
    }

    return 0;
}
