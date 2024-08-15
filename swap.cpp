#include<stdio.h>
#include<conio.h>
int main ()
{
    int a,b,temp;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("\n Value of a:%d\n", a);
    printf("\n Value of b:%d", b);
    return 0;
}
