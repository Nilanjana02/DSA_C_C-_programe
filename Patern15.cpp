#include<iostream>
using namespace std;
int main()
{
	int n,row,space,j;
	cout<<"Enter n : ";
	cin>>n;
	for(row=1;row<=n;row++)
	{
		spaceN=row-1;
		while(space)
		{
			cout<<" ";
			space--;
		}
		for(j=1;j<=n-row+1;j++)
		{
			cout<<row;
		}
		cout<<endl;
	}
}
