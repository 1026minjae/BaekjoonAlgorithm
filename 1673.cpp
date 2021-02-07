#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    long long temp, i;
    vector<long long> answers;

    while(true) {
        cin >> n;
        if(cin.eof()) break;
        cin >> k;
        temp = n;
        while(n >= k) {
            temp += n/k;
            n = (n/k) + (n%k);
        }
        answers.push_back(temp);
    }

    for(i=0;i<answers.size();++i)
        cout << answers[i] << endl;

    return 0;
}