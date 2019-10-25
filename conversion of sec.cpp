#include<stdio.h>
#include<conio.h>
int main()
{
	int s,m,h,s1;
	printf("enter the no of seconds\n");
	scanf("%d",&s);
	h=s/3600;
	m=(s%3600)/60;
	s1=(s%3600)%60;
	printf("hour:%d\nmin:%d\nsec:%d",h,m,s1);
	return 0;
}
