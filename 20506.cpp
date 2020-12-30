#include <iostream>
#include <algorithm>

//으음 찾아보고 풀 수는 있을 것 같은데 시간도 오래 걸리고 용량도 많이 들 것 같아서 일단 접음

using namespace std;

int LCA(int x, int y) {
    //이거만 구현하면 끝인데
    return 1;
}

int main() {
    int N;
    int *arr;
    int i,j, lca;
    long odd, even;

    cin >> N;
    arr = new int[N*N];
    for(i=0;i<N;i++) // lca with self is self
        arr[i*N+i]=i+1;

    for(i=0; i<N-1; i++) {
        for(j=i+1; j<=N; j++) {
            lca = LCA(i,j);
            arr[i*N+j] = lca;
            arr[j*N+i] = lca;
        }
    }

    sort(arr, arr+N*N+1);

    cout << odd << " " << even << endl;

    delete [] arr;
    return 0;
}