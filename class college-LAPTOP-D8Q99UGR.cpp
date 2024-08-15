g//check a number prime or not and odd or even
#include<iostream>
using namespace std;
class function_overloading
{
    public:  
		 void check(int a)
		 {
		 	
		 	int flag,i;
		 	if(a==1)
		 	cout<<"This number is either prime or not prime";
		 	else
		 	{
		 		flag=1;
		 	  for(i=2;i<=a/2;i++)
		 	  {
		 	  	if(a%i==0)
		 	  	{
		 	  		flag=0;
		 	  		break;
				   }
			   }
			   if(flag==1)
			   cout<<"\nPrime";
			   else
			   cout<<"\nNot prime";	
			 }
		 }
		 void check(long int b)
		 {
		 	if(b%2==0)
		 	cout<<"\nEven";
		 	else
		 	cout<<"\nOdd";
		 }
};
int main()
{
	int a;
	long int b;
	cout<<"Enter a number";
	cin>>a;
	b=a;
	function_overloading p;
	p.check(a);
	p.check(b);
	return 0;
}
