#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
	int rem,sum,n,num;
	printf("enter the no\n");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+pow(rem,3);
		n=n/10;
	}
	printf("%d\n",sum);
	if (sum==num)
	{
	printf("armstrong no\n");
}
	else
	{
	printf("not armstrong\n");
}
	return 0;
}
