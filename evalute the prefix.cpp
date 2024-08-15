#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
void push(int);
int pop();
void display();
int stack[50]={0};
int top=-1;
int ch;
int main()
{
	char postfix[100]={'\0'},ele;
	int i,a,b,c;
	printf("Enter an postfix expresion: ");
	scanf("%s",postfix);
	int n=strlen(postfix);
	//postfix=strrev(postfix);
	i=n-1;
	while(i>=0)
	{
		ele=postfix[i];
		if(isdigit(ele))
		{
			push(ele-'0');
		}
		else
		{
			a=pop();
			b=pop();
			switch(ele)
			{
				case '+':
					c=b+a;
					break;
				case '^':
					c=pow(b,a);
					break;
				case '-':
					c=b-a;
					break;	
				case '*':
					c=b*a;
					break;
				case '/':
					c=b/a;
					break;	    	
			}
			push(c);
		}
		i--;
	}
	printf("\nAnswer is : %d",pop());
}
void push(int ele)
{
	if(top==99)
	{
		printf("Overflow");
	}
	else
	{
		top++;
		stack[top]=ele;
	}
}
int pop()
{
	if(top==-1)
	{
		printf("Underflow");
		return top;
	}
	else
	{
		ch=stack[top];
		top--;
	}
	return ch;
}

void display()
{
	int i;
	printf("\n The stack is: ");
	for(i=0;i<=top;i++)
	{
		printf("%d",stack[i]);
	}
}
