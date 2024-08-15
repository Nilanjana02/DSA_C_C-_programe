#include<iostream>
using namespace std;
int main()
{
	int row,i=1;
	char ch = 'A';
	cin>>row;
	while(i<=row)
	{
		int j=1;
		while(j<=row)
		{
		char ch ='A'+i-1;	
		cout<<ch<<" ";
		j++;
	    }
	    cout<<endl;
	    i++;
	}
}
