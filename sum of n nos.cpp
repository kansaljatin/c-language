#include<conio.h>
#include<stdio.h>
int main()
{
	int i=1,n,sum;
	scanf("%d",&n);
	sum=0;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("%d\n",sum);
	return 0;
}
