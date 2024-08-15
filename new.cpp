 #include<stdio.h>
int main()
{ int a[20];
int n,i;
int *ptr;
ptr=&a[0];
printf("Enter the total array element you want to enter:");
scanf("%d",&n);
printf("\nEnter element: ");
 for (i = 0; i < n; i++) {
    scanf("%d", ptr);
   ptr++;
}
}
