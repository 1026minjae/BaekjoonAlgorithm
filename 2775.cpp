#include <iostream>
#include <vector>

using namespace std;

//dynamic programming & memoization

int apartment[15][15];
vector<int> answers;

int residents(int a, int b) {
    if(apartment[a][b]!=0)
        return apartment[a][b];
    int res = 0;
    for(int i=1;i<=b;i++) {
        res += residents(a-1,i);
    }
    apartment[a][b] = res;
    return res;
}

int main() {
    int T, k, n, i;

    for(i=1;i<=14;i++)
        apartment[0][i] = i;

    cin >> T;
    for(i=0;i<T;i++) {
        cin >> k >> n;
        answers.push_back(residents(k,n));
    }

    for(i=0;i<T;i++)
        cout << answers[i] << endl;
    return 0;
}