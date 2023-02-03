#include<stdio.h>
int main()
{
	int n,x,sum=0,t;
	printf("enter a number=");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		x=n%10;
		sum=sum+(x*x*x);
		n=n/10;
	}
	if(t==sum)
	{
		printf("%d is an armstrong number.",t);
	}
	else
	{
		printf("%d is not armstrong number.",t);
	}
	return 0;
}
