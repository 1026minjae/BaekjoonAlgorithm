#include <cstdio>

int main() {
    int i = 0, tot = 0;
    char str[20];
    scanf("%s",str);
    while(str[i] >= 65 && str[i] <= 90) {
        switch(str[i++]) {
            case 65:
            case 66:
            case 67:
                tot += 3;
                break;
            case 68:
            case 69:
            case 70:
                tot += 4;
                break;
            case 71:
            case 72:
            case 73:
                tot += 5;
                break;
            case 74:
            case 75:
            case 76:
                tot += 6;
                break;
            case 77:
            case 78:
            case 79:
                tot += 7;
                break;
            case 80:
            case 81:
            case 82:
            case 83:
                tot += 8;
                break;
            case 84:
            case 85:
            case 86:
                tot += 9;
                break;
            case 87:
            case 88:
            case 89:
            case 90:
                tot += 10;
                break;
        }
    }

    printf("%d",tot);
    return 0;
}