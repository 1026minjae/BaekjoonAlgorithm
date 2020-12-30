#include <iostream>

using namespace std;

int main() {
    long A, B, C;
    cin >> A >> B >> C;
    if (B>=C) { //A is natural number, so A = 1, 2, 3 ~
        cout << -1 << endl;
    } 
    else {
        cout << A/(C-B) + 1 << endl; // due to time limit, we must not use loop!
    }
    return 0;
}