#include <cstdio>

int N, i, j;
short rank[50];
short height[50];
short weight[50];

int main() {
    scanf("%d",&N);
    
    for(i=0;i<N;i++)
        scanf("%d %d",&height[i],&weight[i]);
    
    for(i=0;i<N-1;++i) {
        for(j=i+1;j<N;++j) {
            if(height[i] > height[j]) {
                if(weight[i] > weight[j]) {
                    ++rank[j];
                }
            }
            else if(height[i] < height[j]) {
                if(weight[i] < weight[j]) {
                    ++rank[i];
                }
            }
        }
    }

    for(i=0;i<N;++i) 
        printf("%d ",rank[i]+1);

    return 0;
}