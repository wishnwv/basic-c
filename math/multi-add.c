#include <stdio.h>

int main () {
    int numbers;
    float sum=0;
    printf("How many numbers do you want to add? ");
    scanf("%d", &numbers);
    if(numbers <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    };
    for( int i=0; i<numbers; i++) {
        float num;
        printf("enter number %d: ", i+1);
        scanf("%f", &num);
        sum+=num;
    }
    printf("The sum is %.3f\n", sum);
    return 0;
}