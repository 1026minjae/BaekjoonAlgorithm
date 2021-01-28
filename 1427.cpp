#include <cstdio>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    char number[12];
    int s;

    scanf("%s",number);
    for(s=0;number[s]!='\0';++s);

    sort(number, number+s, compare);

    printf("%s",number);

    return 0;
}