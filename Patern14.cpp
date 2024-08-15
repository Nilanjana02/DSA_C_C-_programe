#include<iostream>
using namespace std;
int main()
{
	int n,row=1;
	cout<<"Enter n : ";
	cin>>n;
	while(row<=n)
	{
		int space=row-1;
		while(space)
		{
		   cout<<" ";
		   space--;	
		}
		int j=1;
		while(j<=n-row+1)
		{
			cout<<"X";
			j++;
		}
		cout<<endl;
		row++;
	}
}
