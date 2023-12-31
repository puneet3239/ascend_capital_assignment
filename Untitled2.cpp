#include<stdio.h>
main()
{
	int i;
	int a=1,b=2,c=3,d=4,e=5;
	int *ptr[5]={&a,&b,&c,&d,&e};
	for(i=0;i<5;i++)
	printf("%d",*ptr[i]);
}
