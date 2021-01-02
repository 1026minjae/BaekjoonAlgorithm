#include <cstdio>

char board[6561][6561];

void draw(int n, int x, int y) {
    if(n==1) {
        board[x][y] = '*';
    }
    else {
        int i, j;
        for(i=n/3;i<n/3*2;i++) {
            for(j=n/3;j<n/3*2;j++) {
                board[x+i][y+j] = ' ';
            }
        }
        draw(n/3, x, y);
        draw(n/3, x+n/3, y);
        draw(n/3, x+n/3*2, y);
        draw(n/3, x, y+n/3);
        draw(n/3, x+n/3*2, y+n/3);
        draw(n/3, x, y+n/3*2);
        draw(n/3, x+n/3, y+n/3*2);
        draw(n/3, x+n/3*2, y+n/3*2);
    }
    return;
}

int main() {
    int N, i, j;
    scanf("%d",&N);
    draw(N,0,0);

    for(j=0;j<N;j++) {
        for(i=0;i<N;i++)
            printf("%c",board[i][j]);
        printf("\n");
    }
    return 0;
}