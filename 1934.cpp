#include <cstdio>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if(a < b) return gcd(b,a);
    return (a%b)?gcd(b,a%b):b;
}

int main() {
    unsigned int T, A, B, i;
    vector<unsigned int> answers;

    scanf("%d",&T);
    for(i=0;i<T;++i) {
        scanf("%d %d",&A,&B);
        answers.push_back(A / gcd(A,B) * B);
    }

    for(i=0;i<T;++i) {
        printf("%d\n",answers[i]);
    }

    return 0;
}
