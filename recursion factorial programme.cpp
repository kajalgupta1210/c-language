#include<stdio.h>
int fact(int);
int main()
{
	int n,f;
	printf("enter the no.");
	scanf("%d",&n);
	f=fact(n);
	printf("the factorial of %d is %d",n,f);
}
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
