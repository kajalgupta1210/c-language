#include <stdio.h>
int main(){
int sum,s=0,a=1,n;
printf("enter length:");
scanf("%d ",&n);
printf("%d ",s);
printf("%d ",a);
  while(n>0)
    {
	sum=s+a;
		printf("%d ",sum);
	a=sum;
	s=a;
	n--;	
    }
    return 0;
}
