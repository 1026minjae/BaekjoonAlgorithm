#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

char str[55];

int main() {
    int T, i, j;
    bool flag = false;
    vector<int> arr;
    vector<bool> answers;

    scanf("%d",&T);

    for(j=0;j<T;j++) {
        scanf("%s",str);
        
        for(i=0;i<strlen(str);i++) {
            if(str[i] == '(')
                arr.push_back(1);
            else if(str[i] == ')') {
                if(!arr.empty()) {
                    arr.pop_back();
                }
                else {
                    flag = true;
                    break;
                }
            }
        }

        if(arr.size() != 0 || flag)
            answers.push_back(false);
        else
            answers.push_back(true);
        
        while(!arr.empty())
            arr.pop_back();
        flag = false;
    }

    for(i=0;i<answers.size();i++) {
        printf((answers[i])?"YES\n":"NO\n");
    }

    return 0;
}