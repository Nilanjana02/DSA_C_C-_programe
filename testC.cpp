    #include <stdio.h>
    int main()
    {
        int a = 2, b = 1, d = 1;
        int n = ++a + a++;
        printf("%d, %d, %d", n, a++ + ++b, ++d + d++ + a++);
    }
