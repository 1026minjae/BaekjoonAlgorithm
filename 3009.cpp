#include <cstdio>

int main() {
    int i;
    int points[4][2];

    for(i=0;i<3;i++) {
        scanf("%d %d",&points[i][0], &points[i][1]);
    }

    for(i=0;i<2;i++) {
        if(points[0][i] != points[1][i]) {
            if(points[0][i] != points[2][i]) {
                points[3][i] = points[0][i];
            }
            else {
                points[3][i] = points[1][i];
            }
        }
        else {
            points[3][i] = points[2][i];
        }
    }

    printf("%d %d",points[3][0],points[3][1]);

    return 0;
}