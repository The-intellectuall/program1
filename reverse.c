#include<stdio.h>
int main()
{
	int n,m,reverse;
	printf("enter a number");
	scanf("%d",&n);
	while(n!=0)
	{
		m=n%10;
		return reverse*10+m;
		n/=10;
		int result1=0;
		result1=reverse;
		printf("%d\n",result1);
	}
	return 0;
}
