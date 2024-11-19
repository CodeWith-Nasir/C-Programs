#include <stdio.h>

void swapByValue(int a, int b);
void swapByReference(int *a, int *b);

int main() {
    int x, y;

    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);

    printf("Before swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    swapByValue(x, y);
    printf("After swapByValue:\n");
    printf("x = %d, y = %d\n", x, y); 

    swapByReference(&x, &y);
    printf("After swapByReference:\n");
    printf("x = %d, y = %d\n", x, y);  

    return 0;
}

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}