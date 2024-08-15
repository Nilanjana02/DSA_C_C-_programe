#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,s=0,i=0;
	cout<<"Enter the value of n : ";
	cin>>n;
	while(n!=0)
	{
		int r=n&1;
		s=s+r*pow(10,i);
		n=n>>1;
		i++;
	}
	cout<<"result  "<<s<<endl;
}
