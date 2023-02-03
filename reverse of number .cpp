//sum of odd and eve till n number

#include <stdio.h>
int main(){
	int n,i,sum=0,avg=0;
	printf("enter length of array:");
	scanf("%d",&n);
	int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
	printf("sum = %d",sum);
		printf("\n");
	printf("average= %d",avg);
}
