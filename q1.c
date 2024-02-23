#include <stdio.h>



int main() {
    int number1, number2, sum;
    scanf("%d %d", &number1, &number2);

    if (number1 == number2) {
        printf("%dx%d \n", number1, number1);
        return 0;
    } else {
        while (number1 > 0 && number2 > 0){
            if (number1 > number2) {

                printf("%dx%d ", number2, number2);
                number1 = number1 - number2;
            } else {
                printf("%dx%d ", number1, number1);
                number2 = number2 - number1;
            }
        }
    }
    printf("\n");
    return 0;
}