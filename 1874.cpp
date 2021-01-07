#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int n, m, i, j;
    int stack[100000] = {0, };
    bool visited[100000];
    vector<char> ops;
    bool flag = true;

    scanf("%d",&n);

    fill_n(visited, n, false);

    for(i=0;i<n;i++)
        scanf("%d",&stack[i]);

    m = stack[0];
    for(i=0;i<m;i++)
        ops.push_back('+');
    ops.push_back('-');
    visited[stack[0]] = true;

    for(i=1;i<n;i++) {
        if(stack[i] < stack[i-1]) {
            for(j=stack[i]+1;j<stack[i-1];j++)
                if(!visited[j]) {
                    flag = false;
                    break;
                }
            if(!flag)
                break;
            else {
                ops.push_back('-');
            }
        }
        else { // front < hind. and stack[i] > m.
            for(j=0;j<stack[i]-m;j++)
                ops.push_back('+');
            ops.push_back('-');
            m = stack[i];
        }
        visited[stack[i]] = true;
    }

    if(flag)
        for(i=0;i<ops.size();i++)
            printf("%c\n",ops[i]);
    else
        printf("NO");
    
    return 0;
}