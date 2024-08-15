#include<iostream>
using namespace std;
int main()
{
	int n,i=1,j;
	cout<<"enter n:";
	cin>>n;
	while(i<=n)
	{
		char ch = 'A'+i-1;
		j=1;
		while(j<=i)
		{
			cout<<ch<<" ";
			ch++;
			j++;
		}
		cout<<endl;
		i++;
	}
}
