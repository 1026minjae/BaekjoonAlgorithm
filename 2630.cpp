#include <cstdio>

int paper[128][128];
int b = 0;
int w = 0;

void getbw(int x, int y, int size) {
    int i, j;
    bool flag = false;
    int color = paper[x][y];

    for(i=x;i<x+size;++i) {
        for(j=y;j<y+size;++j) {
            if(paper[i][j] != color) {
                flag = true;
                break;
            }
        }
        if(flag) break;
    }

    if(flag) {
        getbw(x,y,size/2);
        getbw(x+size/2,y,size/2);
        getbw(x,y+size/2,size/2);
        getbw(x+size/2,y+size/2,size/2);
    }
    else {
        if(color == 0) 
            ++w;
        else
            ++b;
    }
    return;
}

int main() {
    int N, i, j;

    scanf("%d",&N);

    for(i=0;i<N;++i) {
        for(j=0;j<N;++j) {
            scanf("%d",&paper[i][j]);
        }
    }

    getbw(0,0,N);

    printf("%d\n%d",w,b);

    return 0;
}