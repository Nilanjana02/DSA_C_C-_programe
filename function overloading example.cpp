//Example of function over loading
#include<iostream>
using namespace std;
class function_overloading
{
	public:
		int volume(int a)
		{
			return(a*a*a);
		}
		float volume(float r,int h)
		{
			return(3.14*r*r*h);
		}
	};
	int main()
	{
		function_overloading p;
		cout<<"\n volume of the cube is"<<p.volume(9);
		cout<<"\n volume of the cylinder is"<<p.volume(2.1,3);
		return 0;
	}
