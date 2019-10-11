#include<conio.h>
#include<stdio.h>
int main()
{
	int n,p,i;
	p=0;
	printf("enter the no\n");
	scanf("%d",&n);
	for(i=1;i<=n-1;i++)
	{
		if(n%i==0)
		p=p+1;
	}
	if (p>=2)
	printf(" not prime ");
	else
	printf("prime");
	return 0;
}
