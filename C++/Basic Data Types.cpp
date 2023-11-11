#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n%ld\n%c\n%f\n%lf",a,b,c,d,e);
    return 0;
}

//we use scanf (or cin if you prefer) to scan our values
//and use printf (or cout) to put them to the console