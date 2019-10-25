#include<stdio.h>
#include<conio.h>
int main()
{
	int s,m,h,s1;
	printf("enter the no of seconds\n");
	scanf("%d",&s);
	if(s>=0)
	{	h=s/3600;
		m=(s%3600)/60;
		s1=(s%3600)%60;}
	else
	{	printf("invalid no. of seconds as time can never be zero");
	}
	 printf("hour:%d min:%d sec:%d",h,m,s1);
	return 0;
}
