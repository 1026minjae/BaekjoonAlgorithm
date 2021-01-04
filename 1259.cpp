#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string num;
    int s, i;
    bool flag;
    vector<bool> is_palindrome;

    while(1) {
        cin >> num;

        if(num == "0")
            break;
        
        s = num.length();
        flag = true;

        for(i=0;i<=s/2;i++) {
            if(!(flag = num[i]==num[s-i-1]))
                break;
        }

        is_palindrome.push_back(flag);
    }

    for(i=0;i<is_palindrome.size();i++) {

        cout << (is_palindrome[i] ? "yes" : "no") << endl;
    }
        

    return 0;
}