#include<stdio.h>

int reverse(int x)
{
	int reversed=0;
	while(x !=0)
	{
		int l=x%10;
		reversed=reversed*10+l;
		x /=10;
	}
	return reversed;
	
}
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	int reversed=reverse(num);
	printf("Original:%d\nReversed:%d\n",num,reversed);
	
}
