#include <iostream>
#include <vector>

using namespace std;

int che[246913] = {0, }; //n is max 123456. n*2+1=246913

int main() {
    int n, i, j, cnt;
    int wall=0;
    vector<int> answers;

    che[1] = 1;
    
    while(1) {
        cin >> n;
        if(n==0) break;

        cnt = 0;

        if(2*n > wall) {
            for(i = 2; i*i < 2*n+1; i++) {
                if(che[i]==1) 
                    continue;
                for(j = i*i; 0 < j && j < 2*n+1; j += i) {
                    che[j]=1;
                }
            }
            wall = 2*n;
        }

        for(i=n+1; i<=2*n; i++) {
            if(che[i]==0)
                cnt++;
        }
        answers.push_back(cnt);
    }

    for(i=0;i<answers.size();i++)
        cout << answers[i] << endl;
    return 0;
}