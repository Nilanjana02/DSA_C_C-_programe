#include<iostream>
using namespace std;
int main()
{
	int n,row,j;
	cout<<"Enter n : ";
	cin>>n;
	for(row=1;row<=n;row++)
	{
		for(j=1;j<=n-row+1;j++)
		{
			cout<<"X ";
		}
		cout<<endl;
	}
}
