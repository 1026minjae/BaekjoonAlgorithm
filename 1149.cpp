#include <cstdio>

int main() {
    int N, i;
    int rcost, gcost, bcost, rmin, gmin, bmin, prmin = 0, pgmin = 0, pbmin = 0;

    scanf("%d",&N);

    for(i=0;i<N;++i) {
        scanf("%d %d %d",&rcost,&gcost,&bcost);

        rmin = rcost + ((pgmin < pbmin) ? pgmin : pbmin);
        gmin = gcost + ((prmin < pbmin) ? prmin : pbmin);
        bmin = bcost + ((prmin < pgmin) ? prmin : pgmin);
        prmin = rmin;
        pgmin = gmin;
        pbmin = bmin;
    }

    printf("%d", ((rmin < gmin) ? ((rmin<bmin)?rmin:bmin) : ((gmin<bmin)?gmin:bmin)));

    return 0;
}