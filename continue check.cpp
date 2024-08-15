#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the amount : ";
	cin>>n;
	switch(1)
	{
		case 1:
			int k,m;
			k=n%100;
			m=n/100;
			cout<<"100 -> "<< m <<endl;
		case 2:
			int o,p;
			o=k%50;
			p=k/50;
			cout<<"50 -> "<<p<<endl;
		case 3:
			int q,r;
			q=o%20;
			r=o/20;
			cout<<"20 -> "<<r<<endl;
		case 4:
			int s,y;
			s=q%1;
			r=q/1;
			cout<<"1-> "<<r<<endl;
			break;
	}
}
