#include<iostream>
using namespace std;
 int main()
 {
 	int i,j,n=7;
 	int a[7]={1,2,3,4,5,6,7};
 	int b[7];
 	for(int i=0;i<n;i++ )
 	{
 		j=i+1;
 		if(j>n)
 		{
 			
 			break;
 			
		 }
		 int temp = a[i];
 			a[i]=a[j];
 			a[j]=temp;	
	 }
	 for(int k=0;k<n;k++)
	 {
	 	cout<<a[k]<<endl;
	 }
 }
