#include<iostream>
using namespace std;
int main()
{
	int n,row,space,j;
	cout<<"Enter n : ";
	cin>>n;
	for(row=1;row<=n;row++)
	{
		//for spacce
		space=n-row;
		while(space)
		{
			cout<<" ";
			space--;
		}
		//for first triangle
		for(j=1;j<=row;j++)
		{
			cout<<j;
		}
		//for second triangle
		int k=row-1;
		while(k)
		{
			cout<<k;
			k--;
		}
		cout<<endl;
		
	}
	
}
