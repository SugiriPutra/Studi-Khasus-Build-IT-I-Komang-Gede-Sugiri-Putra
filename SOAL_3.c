#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a = 4;
    for (int i = 1; i <= a; i++) {
        int temp = (i*i)* ((i-1)*(i-1))/2;
        printf("%d \n", temp);
    }
    return 0;
}