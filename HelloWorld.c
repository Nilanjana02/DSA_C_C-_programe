#include<iostream.h>
#include<conio.h>
#include<math.h>
void main ()
{
    float a,b,c,s,area;
    cout<<"Enter the value of a,b,c";
    cin>>a>>b>>c;
    s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area = "<<area;
}