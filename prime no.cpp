#include<conio.h>
#include<stdio.h>
int main()
{
	int n,p,i;
	p=0;
	printf("enter the no\n");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		p=p+1;
		break;
	}
	if (p==0)
	printf(" prime ");
	else
	printf("not prime");
	return 0;
}
