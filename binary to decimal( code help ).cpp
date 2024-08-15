#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
	int n,s=0,i=0;
	cout<<"Enter the value of n : ";
	cin>>n;
	while(n!=0)
	{
		int r=n%10;
		s=s+r*pow(2,i);
		n=n/10;
		i++;
	}
	cout<<"result  "<< s<<endl;
}
