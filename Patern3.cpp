#include<iostream>
using namespace std;
int main()
{
	int N,i,count;
	cout<<"Enter the number of rows you want to print: ";
	cin>>N;
	for(i=1;i<=N;i++)
	{
		for(count=1;count<=i;count++)
		{
			cout<<"* " ;
		}
	    cout<<endl;
	}
}
