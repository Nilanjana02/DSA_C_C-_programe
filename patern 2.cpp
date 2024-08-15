#include<iostream>
using namespace std;

int main()
{
	int row = 5;
	for(int i=1;i<=row;i++)
	{
 
		for(int sp=row-i;sp>0;sp--)
		{
			cout<<" ";
		
		}
		char ch = 'A';
		for(int j = 0;j<i;j++)
		{
			cout<<ch;
			ch++;
		}
	    ch--;
		for(int k = i-1;k>0;k--)
		{	
		    ch--;
			cout<<ch;
		}	
	    cout<<endl;
	}
}

