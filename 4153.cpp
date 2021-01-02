#include <iostream>
#include <vector>

using namespace std;

bool judge_right(int s1, int s2, int longest) {
    return (longest*longest == s1*s1 + s2*s2);
}

int main() {
    int a, b, c, i;
    vector<bool> is_right;

    while(1) {
        cin >> a >> b >> c;
        if(!a && !b && !c)
            break;
        if(a <= b) {
            if(c <= b) {
                is_right.push_back(judge_right(a,c,b));
            }
            else {
                is_right.push_back(judge_right(a,b,c));
            }
        }
        else {
            if(c <= a) {
                is_right.push_back(judge_right(b,c,a));
            }
            else {
                is_right.push_back(judge_right(b,a,c));
            }
        }
    }

    for(i=0;i<is_right.size();i++) {
        if(is_right[i]) {
            cout<< "right" << endl;
        }
        else {
            cout<< "wrong" << endl;    
        }
    }

    return 0;
}