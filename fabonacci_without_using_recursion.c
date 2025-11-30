#include<stdio.h>
int main()
{
	int n,i;
	int a=0,b=1,next;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Fabonacci series:");
	for(i=1;i<=n;i++)
	{
		if(i==1)
		{
			printf("%d",a);
			continue;
		}
		if(i==2)
		{
			printf("%d",b);
			continue;
		}
		next=a+b;
		printf("%d",next);
		a=b;
		b=next;
	}
	return 0;
}