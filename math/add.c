#include <stdio.h>

float add( float a, float b){
    return a + b;
}

float addThree(float a, float b, float c) {
    return a + b + c;
}

int main () {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Sum: %.2f\n", add(a, b));

    // Example usage of addThree function
     
    float c;
    printf("Enter a third number: ");
    scanf("%f", &c);
    printf("Sum of three numbers: %.2f\n", addThree(a, b, c));

    return 0;
};

