#include <cstdio>

int main() {
    int x, y, w, h;
    int mindist = 10000; //x,y,w,h is less than 10000

    scanf("%d %d %d %d",&x, &y, &w, &h);
    
    if(mindist > x) mindist = x;
    if(mindist > w-x) mindist = w-x;
    if(mindist > y) mindist = y;
    if(mindist > h-y) mindist = h-y;
    
    printf("%d",mindist);

    return 0;
}