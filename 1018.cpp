#include <cstdio>

char board[50][50];

int have_to_redraw(int x, int y) {
    int i, j, cnt1 = 0, cnt2 = 0;
    for(j=0;j<8;j++) {
        for(i=0;i<8;i++) {
            if((i+j)%2==0) {
                if(board[x+i][y+j]=='B')
                    cnt1++;
                else
                    cnt2++;
            }
            else {
                if(board[x+i][y+j]=='W')
                    cnt1++;
                else
                    cnt2++;
            }
        }
    }

    return (cnt1<cnt2) ? cnt1 : cnt2;
}

int main() {
    int N, M, i, j, temp, min = 64;

    scanf("%d %d",&N,&M);
    for(i = 0; i < N; i++) {
        scanf("%s", board[i]);
    }

    for(i=0;i<N-7;i++) {
        for(j=0;j<M-7;j++) {
            temp = have_to_redraw(i,j);
            min = (min > temp) ? temp : min;
        }
    }

    printf("%d",min);

    return 0;
}