#include <stdio.h>

int main() {

    int a, b, temp;
    int *p, *q;

    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);

    printf("\nBefore swapping a = %d and b = %d", a, b);

    // Assign the memory address of a and b to *ptr1 and *ptr2
    p = &a;
    q = &b;

    // Swap the values a and b
    temp = *p;
    *p = *q;
    *q= temp;

    printf("\nAfter swapping a = %d and b = %d", a, b);

    return 0;

}
