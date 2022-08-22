#include<stdio.h>

int main()
{
	int a,result=0;
	printf("enter a value");
	scanf("%d",&a);
reverse(a);

}
int reverse(int n)
{
	int rem,rev;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("%d",rev);
}
