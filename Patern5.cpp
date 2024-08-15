#include<iostream>
using namespace std;
int main()
{
	int row,i,j;
	cout<<"Enter how many row you want to print: ";
	cin>>row;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<i-j+1<<" ";	
		}
		cout<<endl;
	}
}
