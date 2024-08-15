#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int validate_number(char *str)
 {
while (*str) {
if(!isdigit(*str)){ //if the character is not a number, return
 // false
return 0;
}
str++; //point to next character
}
return 1;
}
int validate_ip(char *ip)
{ //check whether the IP is valid or not
int i, num, dots = 0;
char *tkn;
if (ip == NULL)
return 0;
tkn = strtok(ip, "."); //cut the string using dor delimiter
if (tkn == NULL)
return 0;
while (tkn)
{
if (!validate_number(tkn)) //check whether the sub string is
 // holding only number or not
return 0;
num = atoi(tkn); //convert substring to number
if (num >= 0 && num <= 255)
{
tkn = strtok(NULL, "."); //cut the next part of the string
if (tkn != NULL)
dots++; //increase the dot count
} else
return 0;
}
if (dots != 3) //if the number of dots are not 3, return false
return 0;
return 1;
}
int main()
 {
char ip[20];
 printf("Enter a string: ");
scanf("%[^\n]", &ip); //scanning the whole string, including the white spaces
printf("%s", ip);
validate_ip(ip)? printf(" Valid\n"): printf(" Not valid\n");
}


