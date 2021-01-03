#include <cstdio>

int main() {
    int sound[8];
    int cnt = 0, i;

    scanf("%d %d %d %d %d %d %d %d",&sound[0],&sound[1],&sound[2],&sound[3],&sound[4],&sound[5],&sound[6],&sound[7]);
    
    for(i=0;i<7;i++) {
        if(sound[i] < sound[i+1]) 
            cnt++;
        else
            cnt--;
    }

    if(cnt == 7)
        printf("ascending");
    else if(cnt == -7)
        printf("descending");
    else
        printf("mixed");
    
    return 0;
}