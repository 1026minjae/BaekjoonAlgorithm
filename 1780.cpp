#include <cstdio>

char paper[2187][2187];
int m1 = 0, z = 0, p1 = 0;

void getnum(int x, int y, int size) {
    int i, j;
    bool flag = false;
    char color = paper[x][y];

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
        getnum(x,           y,          size/3);
        getnum(x+size/3,    y,          size/3);
        getnum(x+2*size/3,  y,          size/3);

        getnum(x,           y+size/3,   size/3);
        getnum(x+size/3,    y+size/3,   size/3);
        getnum(x+2*size/3,  y+size/3,   size/3);

        getnum(x,           y+2*size/3, size/3);
        getnum(x+size/3,    y+2*size/3, size/3);
        getnum(x+2*size/3,  y+2*size/3, size/3);
    }
    else {
        if(color == -1) 
            ++m1;
        else if(color == 0)
            ++z;
        else 
            ++p1;
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

    getnum(0,0,N);

    printf("%d\n%d\n%d",m1,z,p1);

    return 0;
}