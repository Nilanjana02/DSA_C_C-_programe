#include<iostream>
using namespace std;
int main()
{
	int row;
	cout<<"Enter the number of rows : ";
	cin>>row;
	
	int col,j=1;
	cout<<"Enter the number of column : ";
	cin>>col;
	for(int i=1;i<=row;i++)
	{  
	    int count=0;
		while(count<col)
		{
			cout<<j<<" ";
			count++;
			j++;
		}
		cout<<endl;
	}
}
