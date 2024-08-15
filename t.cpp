#include<iostream>
using namespace std;
int main()
{
	int a,b,n,i;
	cout<<"Enter the value of n: ";
	cin>>n;
	a=0;
	cout<<a<<endl;
	b=1;
	cout<<b<<endl;
	for(i=2;i<=n-1;i++)
	{
	  int fibo=a+b;
	  cout<<fibo<<endl;
	  a=b;
	  b=fibo;	
	}

}
