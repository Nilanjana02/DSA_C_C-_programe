#include<iostream>
using namespace std;
int main()
{
	int n,i,space,j;
	cout<<"Enter n : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		int num=i;
		space=i-1;
		while(space)
		{
			cout<<" ";
			space--;
		}
		for(j=1;j<=n-i+1;j++)
		{
			cout<<num;
			num++;
		}
		cout<<endl;
	}
}
