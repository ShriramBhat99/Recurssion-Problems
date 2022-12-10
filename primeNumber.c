/* c program to print prime number between the range using Recurssion*/
#include<stdio.h>
int main()
{
	int lower,upper,i,prm;
	printf("Enter the lower bound\n");
	scanf("%d",&lower);
	if(lower==1)
	         lower=2;
	printf("Enter the upper bound\n");
	scanf("%d",&upper);
	printf("Prime numbers between %d and %d is:\n",lower,upper);
	for(i=lower;i<=upper;i++)
	{
		prm=prime(i,i/2);
		if(prm==0)
		  printf("%d\n",i);
	}
	return 0;
}
int prime(int i,int k)
{
	if(k<2)
	      return 0;
	if(i%k==0)
	       return 1;
	else
	    return prime(i,k-1);
	     
}
