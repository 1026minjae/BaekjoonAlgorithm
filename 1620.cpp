#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {
    int N, M, i, tempnum;
    string tempstr;
    vector<string> dict_is;
    map<string, int> dict_si;
    vector<string> answers;

    cin >> N >> M;
    for(i=0;i<N;++i) {
        cin >> tempstr;
        dict_is.push_back(tempstr);
        dict_si[tempstr] = i+1;
    }
    for(i=0;i<M;++i) {
        cin >> tempstr;
        if(48 < tempstr[0] && tempstr[0] < 58) {
            stringstream toint(tempstr);
            toint >> tempnum;
            answers.push_back(dict_is[tempnum-1]);
        }
        else {
            stringstream ss;
            ss << dict_si[tempstr];
            answers.push_back(ss.str());
        }
    }
    for(i=0;i<answers.size();++i) {
        cout << answers[i] << endl;
    }

    return 0;
}