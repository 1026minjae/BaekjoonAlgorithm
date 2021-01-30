#include <cstdio>
#include <vector>

using namespace std;

int arr[101][101][101];

int w(int a, int b, int c) {
    if(arr[50+a][50+b][50+c] != 0)
        return arr[50+a][50+b][50+c];
    
    if(a <= 0 || b <= 0 || c <= 0)
        arr[50+a][50+b][50+c] = 1;
    else if(a > 20 || b > 20 || c > 20)
        arr[50+a][50+b][50+c] = w(20, 20, 20);
    else if(a < b && b < c)
        arr[50+a][50+b][50+c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
    else
        arr[50+a][50+b][50+c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
    
    return arr[50+a][50+b][50+c];
}

int main() {
    int a, b, c, i, j, k;
    vector<int> as;
    vector<int> bs;
    vector<int> cs;
    vector<int> answers;

    while(1) {
        scanf("%d %d %d",&a,&b,&c);

        if(a==-1 && b==-1 && c==-1) 
            break;
        
        as.push_back(a);
        bs.push_back(b);
        cs.push_back(c);
        
        answers.push_back(w(a,b,c));
    }

    for(a=0;a<answers.size();++a) {
        printf("w(%d, %d, %d) = %d\n",as[a],bs[a],cs[a],answers[a]);
    }

    return 0;
}