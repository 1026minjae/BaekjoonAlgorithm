#include <cstdio>

bool able[10] = {true, true, true, true, true, true, true, true, true, true};

bool possible_num(int num) { // 그 숫자를 입력하는 것이 가능한지 알아내는 함수
    while(num > 0) {
        if(!able[num%10])
            return false;
        num /= 10;
    }
    return true;
}

int cnt_digit(int num) { // 숫자 몇개로 이루어지는지 세는 함수
    int cnt = 0;
    while(num > 0) {
        ++cnt;
        num /= 10;
    }
    return cnt;
}

int least_cnt(int num) {
    int min_cnt = (num >= 100) ? (num - 100) : (100 - num); //100부터 갔을 때 몇번 +/-하면 갈 수 있는지
    int temp;
    for(temp = num; temp <= 500000; ++temp) {
        if(possible_num(temp)) {
            if(temp - num + cnt_digit(temp) < min_cnt)
                min_cnt = temp - num + cnt_digit(temp);
            break;
        }
    }
    for(temp = num; temp >= 0; --temp) {
        if(possible_num(temp)) {
            if(num - temp + cnt_digit(temp) < min_cnt)
                min_cnt = num - temp + cnt_digit(temp);
            break;
        }
    }

    return min_cnt;
}

int main() {
    int N, M, i, temp;

    scanf("%d\n%d",&N,&M);
    for(i=0;i<M;++i) {
        scanf("%d",&temp);
        able[temp] = false;
    }

    printf("%d",least_cnt(N));

    return 0;
}