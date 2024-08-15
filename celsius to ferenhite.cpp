#include <stdio.h>
int main()
{
    float c, f;
    printf("Enter temperature in centigrade: ");
    scanf("%f", &c);
    f = (c * 9 / 5.0) + 32;
    printf("%.2f degree centigrade = %.2f Fahrenheit", c, f);
    return 0;
}
