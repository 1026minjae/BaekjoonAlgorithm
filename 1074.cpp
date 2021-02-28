#include <cstdio>

int powerof2[16] = {1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768};

int number(int n, int r, int c) {
    if(n==0) return 0;

    if(r < powerof2[n-1]) {
        if(c < powerof2[n-1]) { // first
            return number(n-1,r,c);
        }
        else { // second 
            return powerof2[n-1]*powerof2[n-1] + number(n-1,r,c-powerof2[n-1]);
        }
    }
    else {
        if(c < powerof2[n-1]) { // third
            return 2 * powerof2[n-1]*powerof2[n-1] + number(n-1,r-powerof2[n-1],c);
        }
        else { // fourth
            return 3 * powerof2[n-1]*powerof2[n-1] + number(n-1,r-powerof2[n-1],c-powerof2[n-1]);
        }
    }
}

int main() {
    int N, r, c;

    scanf("%d %d %d",&N,&r,&c);

    printf("%d",number(N,r,c));
    
    return 0;
}