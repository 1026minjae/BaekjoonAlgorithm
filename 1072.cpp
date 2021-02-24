#include <cstdio>

int main() {
    unsigned int X, Y, Z, low, mid, high, temp;

    scanf("%d %d",&X,&Y);
    if(X == Y) {
        printf("-1");
    }
    else {
        Z = 100 * Y / X;
        low = 1;
        high = X;
        while(low<=high) {
            mid = (low + high) / 2;
            
            if(100 * (Y+mid) / (X+mid) >= Z + 1) {
                high = mid - 1;
                temp = mid;
            }
            else {
                low = mid + 1;
            }
        }
        printf("%d", temp);
    }

    return 0;
}