
#include<stdio.h>
#include <math.h>
#include <cstring>

int check_parity(int n,int i,int code[])        
{
    int p=0,k;
    for(int j=i;j<=n;j=k+i)
    {
        for(k=j;k<j+i && k<=n;k++)        //for i=1 ->bits=1,3,5,7,9,11    for i=2 ->bits 2,3,6,7,10,11
        {                    //i is parity bit position
            if(code[k]==1)
            p++;
        }
    }
    if(p%2==0)
        return 0;        //if no. of 1 is even return 0
    else 
        return 1;        //if no. of 1 is odd return 1
}

void hamming_code(int data[], int num)
{
    int r=0,m=0,n,j=1,c,code[50];
    
    while((r+num+1)>(pow(2,r)))            //calculating no. of parity/redundant bits
        r++;

    n=num+r;                    //adding no. of redundant bits to array size
    for(int i=1;i<=n;i++)
    {
        if(i==pow(2,m) && m<=r)
        {
            code[i]=0;            //initializing all the bit position of power 2 to zero
            m++;
        }
        else
        {
            code[i]=data[j];        //assgning data to remaining positions
            j++;
        }
    }

    m=0;
    for(int i=1;i<=n;i++)
    {
        if(i==pow(2,m) && m<=r)            
        {
            c=check_parity(n,i,code);        //assigning parity bit to position of power 2
            code[i]=c;
            m++;
        }
    }

   printf("The hamming code for given data is: ");
    for(int i=n;i>0;i--)
    printf("%d",code[i]);
   printf("\n Enter the received code:");
    for(int i=n;i>0;i--)
    scanf("%d",&code[i]);
    m=j=c=0;
    for(int i=1;i<=n;i++)
    {
        if(i==pow(2,m) && m<=r)
        {
            c=c+(pow(2,j)*check_parity(n,i,code));    // decimal value of error code
            j++;
            m++;
        }
    }
    if(c==0)
        printf("\n Received word is correct.");
    else
    {
        printf("\nThere is error in bit %d",(n-c)+1);
		printf("\nThe corrected code is: ");
        if(code[c]==1)
            code[c]=0;
        else
            code[c]=1;
        for(int i=n;i>0;i--)
            printf("%d",code[i]);
    }
}

int main()
{
    int data[50], num;
    printf("Enter the size of data: ");
   scanf("%d",&num);
    printf("Enter the data: ");
    for(int i=num;i>0;i--)
    scanf("%d",&data[i]);

    hamming_code(data, num);

    return 0;
}

 
