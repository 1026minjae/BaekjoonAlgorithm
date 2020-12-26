#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, b, i;
    vector<int> answers;
    
    while(cin >> a >> b) {
        answers.push_back(a+b);
    }
    for(i=0;i<answers.size();i++)
        cout<<answers[i]<<endl;
    return 0;
}