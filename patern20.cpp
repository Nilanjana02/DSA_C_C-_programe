#include<iostream>
using namespace std;
int main()
{
	int n,s,i,j,row,x;
	cout<<"Enter the value of n:";
	cin>>n;
	for(row=1;row<=n;row++)
	{
		for(s=1;s<=n-row;s++)
		{
			cout<<" ";
		}
		int p=row;
		for(j=1;j<=row;j++)
		{
			cout<<p;
			p--;
		}
		int k=2;
		for(i=1;i<=row-1;i++)
		{
			cout<<k;
			k++;
		}
		cout<<endl;
	}
	for(row=1;row<=n-1;row++)
	{
		for(s=1;s<=row;s++)
		{
			cout<<" ";
		}
		int g = n-1;
		int m=g-row+1;
		for(i=1;i<=n-row;i++)
		{
			cout<<m;
			m--;	
		}
		int h=2;
		for(x=1;x<=n-row-1;x++)
		{
			cout<<h;
			h++;
		}
		cout<<endl;
	}
}
