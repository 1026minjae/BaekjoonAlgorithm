#include <cstdio>

int main() {
    int N, i, j, temp, min, minindex;
    int arr[1000];

    scanf("%d",&N);

    for(i=0;i<N;++i)
        scanf("%d",&arr[i]);

    for(i=0;i<N;++i) {
        min = arr[i];
        minindex = i;
        for(j=i+1;j<N;++j) {
            if(min > arr[j]) {
                min = arr[j];
                minindex = j;
            }
        }
        temp = arr[minindex];
        arr[minindex] = arr[i];
        arr[i] = temp;
    }

    for(i=0;i<N;++i)
        printf("%d\n",arr[i]);

    return 0;
}