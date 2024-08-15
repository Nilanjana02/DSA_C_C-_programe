//operator overloading
#include<iostream>
using namespace std;
class negetive
{
	private:
		   int p,q,r;
    public:
    	 void inputdata(int a,int b,int c)
    	 {
    	 	p=a;
    	 	q=b;
    	 	r=c;
		 }
		 void output(void)
		 {
		 	cout<<"\n value of p = "<<p;
		 	cout<<"\n value of q = "<<q;
		 	cout<<"\n value of r = "<<r;
		 }
		 void operator -(void)
		 {
		 	p=-p;
		 	q=-q;
		 	r=-r;
		 }
};
int main()
{
	negetive s;
	s.inputdata(50,-60,70);
	s.output();
	-s;
	s.output();
	return 0;
}
