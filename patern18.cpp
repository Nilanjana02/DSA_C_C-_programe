#include<iostream>
using namespace std;
int main()
{
	int n,row,star=0,i,j;
	cout<<"Enter n : ";
	cin>>n;
	for(row=1;row<=n;row++)
	{
		for(i=1;i<=n-row+1;i++)
		{
			cout<<i<<" ";
		}
		//for print *
		int p=star;
		while(p)
		{
			cout<<"* ";
			p--;
		}
		//for second triangle
		int num=n-row+1;
		for(j=1;j<=n-row+1;j++)
		{
			cout<<num<<" ";
			num--;
		}
		cout<<endl;
		star=star+2;
	}
	
}
