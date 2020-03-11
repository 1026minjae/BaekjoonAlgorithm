#include <iostream>
#define cube(x) x*x*x

using namespace std;

int main() {
    short a, b, c, d;

    for(a=6;a<=100;a++) {
        for(b=2;b<=a-3;b++) {
            for(c=b+1;c<=a-2;c++) {
                for(d=c+1;d<=a-1;d++) {
                    if(cube(a) == cube(b) + cube(c) + cube(d)) {
                        cout<<"Cube = "<<a<<", Triple = ("<<b<<","<<c<<","<<d<<")"<<endl;
                    }
                }
            }
        }
    }
    return 0;
}