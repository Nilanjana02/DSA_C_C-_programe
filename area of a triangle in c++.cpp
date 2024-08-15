// Area of a triangle
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main ()
{
float a,b,c,s,area;
cout<<"Enter the value of a,b,c";
cin>>a>>b>>c;
s=(a+b+c)/2.0;
area=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<"Area = "<<area;
return 0;
}
