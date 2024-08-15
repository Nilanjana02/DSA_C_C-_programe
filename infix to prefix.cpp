#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char stack[100];
char prefix[100],infix[100];
int top=-1;
int precedence(char symbol);
void push(char symbol);
char pop();
void print();
int space(char c);
int isEmpty();
void intopre(void);
int main()
{
	printf("Enter an infix expression: ");
	gets(infix);
	intopre();
	print();
	return 0;
}
void intopre(void)
{
	int i,j=0;
	char symbol,next;
	for(i=(strlen(infix)-1);i>=0;i--)
	{
		symbol=infix[i];
		//if the user enter the white space
		if(!space(symbol))
		{
		switch(symbol)
		{
			case '(':
				while((next=pop())!=')')
				    prefix[j++]=next;
				break;
			case ')':
			    push(symbol);
				break;
			case '+':
			case '-':
			case '*':
			case '/':
			case '^':
			    while(!isEmpty()&&((precedence(stack[top]))>precedence(symbol)))
				{
					prefix[j++]=pop();
				} 
				push(symbol);
				break;
			default:
			    prefix[j++]=symbol;	 		
		}
	}
	
}
while(!isEmpty())
{
	prefix[j]=pop();
	j++;
}
prefix[j]='\0';
}
int precedence(char symbol)
{
	//high value means high precedence
	switch(symbol)
	{
	case '^':
		return 3;
	case '*':
	case '/':
	    return 2;
	case '+':
	case '-':
	    return 1;
	case '(':
	case ')':
	    return 0;
	}
}
void push(char c)
{
	if(top==99)
	{
		printf("Overflow..");
		return;
	}
	top++;
	stack[top]=c;
}
char pop()
{
	char c;
	if(top==-1)
	{
		printf("stack is empty..");
		exit(1);
	}
	c=stack[top];
	top=top-1;
	return c;
}
void print()
{
	int i=(strlen(infix)-1);
	printf("The equivalent prefix expression is :" );
	while(prefix[i])
	{
		printf("%c",prefix[i--]);
	}
	printf("\n");
	return;
	
}
int space(char c)
{
	if(c==' '||c =='\t')
	   return 1;
	else
	   return 0;   
}
int isEmpty()
{
	if(top==-1)
	   return 1;
	else
	   return 0;   
}
