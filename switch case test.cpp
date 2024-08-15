#include<iostream>
using namespace std;
int main()
{
	int n=3;
	int num=2;
	switch(n)
	{
		case 2+1:
			cout<<"first"<<endl;
			break;
		case '1':
			cout<<"f"<<endl;
			break;	
		case 4:
			cout<<"This is the nested case"<<endl;
			switch(num)
			{
				case 1:
					cout<<"nested first"<<endl;
					break;
				case 2:
					cout<<"nested second"<<endl;
					
			}
			break;
		default:
			cout<<"nothing";
	}
}
