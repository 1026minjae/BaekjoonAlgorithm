#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int T, i;
    char line[5];
    vector<int> answers;

    scanf("%d",&T);
    for(i=0;i<T;++i) {
        scanf("%s",line);
        answers.push_back((line[0]-48)+(line[2]-48));
    }

    for(i=0;i<T;++i)
        printf("%d\n",answers[i]);

    return 0;
}