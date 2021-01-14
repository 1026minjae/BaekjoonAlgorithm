#include <cstdio>
#include <list>
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
    list<int> queue;
    list<int> res;
    list<int>::iterator iter;

    scanf("%d\n",&N);

    for(i=0;i<N;++i) {
        fgets(oper, 13, stdin);

        if(oper[0] == 'p') {
            if(oper[1] == 'u') { // push
                queue.push_back(readnum());
            }
            else { // pop
                if(queue.empty())
                    res.push_back(-1);
                else {
                    res.push_back(queue.front());
                    queue.pop_front();
                }
            }
        } 
        else if(oper[0] == 's') { // size
            res.push_back(queue.size());
        }
        else if(oper[0] == 'e') { // empty
            res.push_back((queue.empty())?1:0);
        }
        else if(oper[0] == 'f') { // front
            if(queue.empty())
                res.push_back(-1);
            else {
                res.push_back(queue.front());
            }
        }
        else { // back
            if(queue.empty())
                res.push_back(-1);
            else {
                res.push_back(queue.back());
            }
        }
    }

    for(iter = res.begin(); iter != res.end(); ++iter) {
        printf("%d\n", *iter);
    }

    return 0;
}