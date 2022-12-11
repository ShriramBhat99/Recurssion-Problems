/* Recurssive program to find GCD and LCM of the given number */
#include<stdio.h>
int GCD(int,int);
int main()
{
	int n1,n2,gcd,lcm;
	printf("Enter any two numbers\n");
	scanf("%d%d",&n1,&n2);
	gcd=GCD(n1,n2);
	lcm=(n1*n2)/gcd;
	printf("GCD of %d and %d is %d\n",n1,n2,gcd);
	printf("LCM of %d and %d is %d\n",n1,n2,lcm);
	return 0;
}

int GCD(int n1,int n2)
{
	if(n2==0)
	      return n1;
	return GCD(n2,n1%n2);
}
