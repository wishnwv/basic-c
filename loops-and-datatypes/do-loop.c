#include <stdio.h>

int main () {
    int num = 1;
    do {
        printf("%d\n", num);
        num++;
        if(num > 10) {
            break;
        }
    } while(num <= 10);
}

