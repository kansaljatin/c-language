#include<conio.h>
#include<stdio.h>
int main()
{
	int i=1,n,fac;
	scanf("%d",&n);
	fac=1;
	while(i<=n)
	{
		fac=fac*i;
		i++;
	}
	printf("%d\n",fac);
	return 0;
}
