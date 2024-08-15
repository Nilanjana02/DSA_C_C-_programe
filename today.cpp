#include<iostream>
using namespace std;
class array
{
	private:
	       int a[20],n ;       
	public:
		void input(void)
		{
			int i;
		   	cout<<"Enter how many array elements";
			cin>>n;
			cout<<"Enter array elements";
			for(i=0;i<n;i++)
			cin>>a[i];
			
		}
		  void avarage(void)
		  {
		  	int i,s=0;
		  	float avg;
		  	for(i=0;i<n;i++)
		  	{
		  	s=s+a[i];
		  }
		    avg=(float)s/n;
		  	cout<<"Avarage="<<avg;
		  }
		  void small_large(void)
		  {
		  	int big,small,i;
		  	big=small=a[0];
		  	for(i=0;i<n;i++)
		  	{
		  		if(a[i]<small)
		  		small=a[i];
		  		if(a[i]>big)
		  		big=a[i];
		  	}
		  	cout<<"\n Smallest = "<<small;	
		 	cout<<"\n largest = "<<big;
		 }
};
int main()
{
	array p;
	p.input();
	p.avarage();
	p.small_large();
	return 0;
}

