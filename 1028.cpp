#include <cstdio>

char **board;

bool diamond(int size, int x, int y) {
    int xx = x + size -1, yy = y;

    for(;xx < x+2*size-1;++xx) {
        if(board[yy++][xx] != '1')
            return false;
    }
    --xx;
    --yy;
    for(;xx >= x+size-1;--xx) {
        if(board[yy++][xx] != '1')
            return false;
    }
    ++xx;
    --yy;
    for(;xx >= x;--xx) {
        if(board[yy--][xx] != '1')
            return false;
    }
    ++xx;
    ++yy;
    for(;xx < x+size;++xx) {
        if(board[yy--][xx] != '1')
            return false;
    }

    return true;
}

int main() {
    int R, C, i, j, t;
    int biggest = 0;
    bool flag = false;

    scanf("%d %d",&R,&C);

    board = new char*[R];
    for(i=0;i<R;++i)
        board[i] = new char[C];

    for(i=0;i<R;++i)
        scanf("%s",board[i]);

    for(t=0;t<(R>C?C:R);++t) {
        for(i=0;i<R-t;++i) {
            for(j=0;j<C-t;++j) {
                if(diamond(t+1,i,j)) {
                    printf("%d %d %d\n",t+1,i,j);
                    biggest = t+1;
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }
        flag = false;
    }

    printf("%d",biggest);

    return 0;
}