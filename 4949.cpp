#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

char str[105];

int main() {
    int i;
    bool flag = false;
    vector<int> arr;
    vector<bool> answers;

    while(1) {
        fgets(str, 102, stdin);
        str[strlen(str)-1] = '\0';
        if(strcmp(".",str) == 0)
            break;
        
        for(i=0;i<strlen(str);i++) {
            if(str[i] == '(')
                arr.push_back(1);
            else if(str[i] == '[')
                arr.push_back(2);
            else if(str[i] == ')') {
                if(arr.back() == 1) {
                    arr.pop_back();
                }
                else {
                    flag = true;
                    break;
                }
            }
            else if(str[i] == ']') {
                if(arr.back() == 2) {
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
        printf((answers[i])?"yes\n":"no\n");
    }

    return 0;
}