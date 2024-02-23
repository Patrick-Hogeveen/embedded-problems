#include <stdio.h>

typedef struct node {
    int val;
    struct node * next;
} node_t;

int main() {
    int number1, number2, sum;
    scanf("%d %d", &number1, &number2);

    node_t * head = NULL;
    head = (node_t *) malloc(sizeof(node_t));

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
    //calc sum
    sum = number1 + number2;

    printf("%d + %d = %d \n", number1, number2, sum);

    return 0;
}