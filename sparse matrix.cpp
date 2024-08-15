#include<iostream>
using namespace std;
int main()
{
	int sparseMatrix[5][6]=
	{
		{0,0,0,0,9,0},
		{0,8,0,0,0,0},
		{4,0,0,2,0,0},
		{0,0,0,0,0,5},
		{0,0,2,0,0,0}
	};
	int size=0;
	for(int row=0;row<5;row++)
	for(int column=0;column<6;column++)
	if(sparseMatrix[row][column]!=0)
	size++;
	int resultMatrix[3][size];
	int k=0;
	for(int row=0;row<5;row++)
	for(int column=0;column<6;column++)
	if(sparseMatrix[row][column]!=0)
	{
		resultMatrix[0][k]=row;
		resultMatrix[1][k]=column;
		resultMatrix[2][k]=sparseMatrix[row][column];
		k++;
	}
	cout<<"Triplet Representation: "<<endl;
	for(int row=0;row<3;row++)
	{
		for(int column=0;column<size;column++)
		cout<<resultMatrix[row][column]<<" ";
		cout<<endl;
	}
	return 0;
}
