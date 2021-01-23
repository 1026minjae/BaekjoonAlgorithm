#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int C, N, i, j;
    int scores[1000];
    int cnt;
    float avg;
    vector<double> answers;

    scanf("%d",&C);
    for(i=0;i<C;++i) {
        scanf("%d",&N);
        cnt = 0;
        avg = 0;
        for(j=0;j<N;++j) {
            scanf("%d",&scores[j]);
            avg += scores[j];
        }
        avg /= N;
        for(j=0;j<N;++j)
            if(avg < scores[j]) ++cnt;
        answers.push_back((float)cnt/N*100);
    }

    for(i=0;i<C;++i)
        printf("%.3f%%\n",answers[i]);

    return 0;
}