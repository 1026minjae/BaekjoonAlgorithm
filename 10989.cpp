#include <cstdio>
#include <algorithm>

using namespace std;

int main() { //메모리 제한에 걸림
    int N, i;
    short *arr;

    scanf("%d",&N);
    arr = new short[N];

    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);
    
    sort(arr, arr+N);

    for(i=0;i<N;i++)
        printf("%d\n",arr[i]);

    delete [] arr;
    return 0;
}