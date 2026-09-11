#include <stdio.h>
#include <string.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    if (a*b > a+b){
        printf("*");
    }else if (a+b > a-b) {
        printf("+");
    } else if (a-b > a+b) {
        printf("-");
    } else if (a*b > a-b) {
        printf("*");
    } else {
        printf("eror");
    }

    return 0;
}
