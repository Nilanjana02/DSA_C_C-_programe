#include<iostream>
using namespace std;
int main()
{
	int row,count,i;
	cout<<"Enter the number of row: ";
	cin>>row;
	int value = 1,a;
	for(i=1;i<=row;i++)
	{    
	    a= value;
		for(count=1;count<=i;count++)
		{
			cout<<a<<" ";
			a++;
		}
		value++;
		cout<<endl;
	}
}
