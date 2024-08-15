#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the alphabet : ");
	scanf("%c",&ch);
	if((ch=='a')||(ch=='A')||(ch=='E')||(ch=='e')||(ch=='i')||(ch=='I')||(ch=='O')||(ch=='o')||(ch=='U')||(ch=='u'))
	  printf("%c is a vowel.",ch);
	else
	  printf("%c is a consonant.",ch);
	return 0;
}
