#include<iostream>
using namespace std;
int main()
{
	int n,row,space;
	cout<<"Enter n : ";
	cin>>n;
	for(row=1;row<=n;row++)
	{
		for(space=1;space<=n-row;space++)
		{
			cout<<" ";
		}
		int col=1;
		for(col=1;col<=row;col++)
	    {
		     cout<<"*";
     	}
     	cout<<endl;
	}
	
}
