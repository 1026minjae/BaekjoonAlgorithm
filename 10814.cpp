#include <cstdio>
#include <list>
#include <utility>
#include <string>

using namespace std;

int main() {
    list< pair<int, string> > people;
    list< pair<int, string> >::iterator iter;
    int N, i, temp;
    char tempstr[100];
    bool flag = false;

    scanf("%d", &N);

    for(i=0;i<N;i++) {
        scanf("%d %s", &temp, tempstr);
        for(iter = people.begin(); iter != people.end(); ++iter) {
            if(temp < iter->first) {
                people.insert(iter, pair<int,string>(temp, tempstr));
                flag = true;
                break;
            }
        }
        if(!flag) {
            people.push_back(pair<int,string>(temp, tempstr));
        }
        flag = false;
    }

    for(iter = people.begin(); iter != people.end(); ++iter) {
        printf("%d %s\n", iter->first, iter->second.c_str());
    }

    return 0;
}

//4연속 시간초과... 나중에 다시 풀 것