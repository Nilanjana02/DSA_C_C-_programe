#include<stdio.h>
int main()
 {
 int a=-1,b=-a;
 printf("\nThe value of B %d\n",b);
 int x,y;
 x=(a>0)&&(b<0)||(a<0)&&(b>0);
 printf("The X + %d",x);
 y=(a<=0)||(b>=0)&&(a>=0)||(b<=0);
 printf("The Y + %d",y);
 printf("\n\n\n%d",x==y);
}
