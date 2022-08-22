#include<stdio.h>
int area(int l,int b)
{
return l*b;	
}
int main()
{
	int a,b,result1=0;
	printf("enter a value");
	scanf("%d%d",&a,&b);
	result1=area(a,b);
	printf("%d\n",result1);
	return 0;
}

