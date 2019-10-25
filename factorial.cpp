#include<conio.h>
#include<stdio.h>
int main()
{
	int i,n,fac;
	scanf("%d",&n);
	if(n>0)
	{fac=1;
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}}
	else
	{ printf("invalid no.");
	}
	printf("%d\n",fac);
	return 0;
}
