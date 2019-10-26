#include<conio.h>
#include<stdio.h>
int main()
{
	int i,n,sum;
	scanf("%d",&n);
	sum=0;
	if(n>0)
	{	
		for(i=1;i<=n;i++)
		{
			sum=sum+i;
		}
			printf("%d\n",sum);
	}
	else if(n==0)
	{
		printf("sum is zero" );
	}
	else
	{
	    printf("plz enter the positive number");
	}
	
	
return 0;
}
