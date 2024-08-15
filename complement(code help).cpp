#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter ";
	cin>>n;
	int flag=0;
	while(n!=0)
	{

		r=n%2;
		n=n/2;
		if(n==1)&& (r==0)
		{
			flag=1;
			break;
		}
		
	}
	if(flag==1)
	{
		cout<<"flase"<<endl;
	}
	else
	    cout<<"true"<<endl;
}

