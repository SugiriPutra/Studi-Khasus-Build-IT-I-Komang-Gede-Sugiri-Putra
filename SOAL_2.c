#include <stdio.h>
#include <string.h>

int main() {
    int a= 10, b= 12;
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
