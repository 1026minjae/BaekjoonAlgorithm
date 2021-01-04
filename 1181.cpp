#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool compare(string a, string b) {
    if(a.length() < b.length())
        return true;
    else if(a.length() > b.length())
        return false;
    else {
        return (a < b);
    }
}

int main() {
    int N, i;
    string words[20000];
    string temp = "";

    cin >> N;
    for(i=0;i<N;i++) {
        cin >> words[i];
    }
    sort(words,words+N,compare);

    for(i=0;i<N;i++) {
        if(temp != words[i])
            cout << words[i] << endl;
        temp = words[i];
    }
    
    return 0;
}