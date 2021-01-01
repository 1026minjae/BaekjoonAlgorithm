#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> answers;
    int T, i, prev, cnt;
    unsigned long x, y; //in my solution, x can be greater than 2^31, so use 8byte.

    cin >> T;
    for(i=0;i<T;i++) {
        prev = 0;
        cnt = 0;

        cin >> x >> y;

        while(x < y) {
            if((prev+1)*(prev+2)/2 <= y-x) {
                x += ++prev;
                cnt++;
            }
            else if(prev*(prev+1)/2 <= y-x) {
                x += prev;
                cnt++;
            }
            else if(prev*(prev-1)/2 <= y-x) {
                x += --prev;
                cnt++;
            }
        }

        answers.push_back(cnt);
    }

    for(i=0;i<T;i++)
        cout << answers[i] << endl;
    
    return 0;
}