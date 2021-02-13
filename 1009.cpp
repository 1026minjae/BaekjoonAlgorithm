#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int T, a, b, i, temp, temp2, answer;
    vector<int> answers;

    scanf("%d",&T);
    for(i=0;i<T;++i) {
        scanf("%d %d",&a,&b);
        answer = 1;
        if(a != 1) {
            temp = 1;
            temp2 = a;
            while(temp <= b) {
                if(b&temp)
                    answer = (answer * temp2) % 10;
                temp *= 2;
                temp2 = (temp2 * temp2) % 10;
            }
        }
        if(answer == 0) answer = 10;
        answers.push_back(answer);
    }

    for(i=0;i<T;++i)
        printf("%d\n",answers[i]);
    
    return 0;
}