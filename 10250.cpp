#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T, H, W, N, i;
    int X, Y;
    vector<int> rooms;

    cin >> T;

    for(i=0;i<T;i++) {
        cin >> H >> W >> N;
        rooms.push_back(101 + 100*((N-1)%H) + (N-1)/H);
    }

    for(i=0;i<T;i++) {
        cout << rooms[i] << endl;
    }
    return 0;
}