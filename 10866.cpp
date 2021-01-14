#include <cstdio>
#include <list>
#include <cstring>

using namespace std;

char oper[25];

int readnum(int s) {
    int i, num = 0;
    for(i=s;oper[i]!='\n';i++)
        num = num*10 + (oper[i]-48);
    return num;
}

int main() {
    int N, i;
    list<int> deck;
    list<int> res;
    list<int>::iterator iter;

    scanf("%d\n",&N);

    for(i=0;i<N;++i) {
        fgets(oper, 23, stdin);

        if(oper[0] == 'p') {
            if(oper[1] == 'u') { // push
                if(oper[5] == 'f') // push_front
                    deck.push_front(readnum(11));
                else // push_back
                    deck.push_back(readnum(10));
            }
            else { // pop
                if(oper[4] == 'f') { // pop_front
                    if(deck.empty())
                        res.push_back(-1);
                    else {
                        res.push_back(deck.front());
                        deck.pop_front();
                    }
                }
                else { // pop_back
                    if(deck.empty())
                        res.push_back(-1);
                    else {
                        res.push_back(deck.back());
                        deck.pop_back();
                    }
                }
            }
        } 
        else if(oper[0] == 's') { // size
            res.push_back(deck.size());
        }
        else if(oper[0] == 'e') { // empty
            res.push_back((deck.empty())?1:0);
        }
        else if(oper[0] == 'f') { // front
            if(deck.empty())
                res.push_back(-1);
            else {
                res.push_back(deck.front());
            }
        }
        else { // back
            if(deck.empty())
                res.push_back(-1);
            else {
                res.push_back(deck.back());
            }
        }
    }

    for(iter = res.begin(); iter != res.end(); ++iter) {
        printf("%d\n", *iter);
    }

    return 0;
}
