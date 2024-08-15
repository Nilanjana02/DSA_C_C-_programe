//check three points are coliner or not
#include<stdio.h>
#include<conio.h>
int main ()
{
	int x1,y1,x2,y2,x3,y3,a;
	printf("Enter three point");
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	a=y1*(x2-x3)+y2*(x3-x1)+y3*(x1-x2);
	if(a==0)
	printf("points are coliner");
	else
	printf("points are not coliner");
	return 0;
}
