#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a= 10, b= 7, c= 3;
    char d[2];
    if (a+b == c){
        strcpy(d, "+");
    } else if (a-b == c) {
        strcpy(d, "-");
    } else if (a*b == c) {
        strcpy(d, "*");
    }
    printf("%s\n", d);
    return 0;
}
