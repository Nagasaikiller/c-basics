#include<stdio.h>
main()
{
	int num1,num2,num3;
	scanf("%d%d%d",&num1,&num2,&num3);
	if (num1>num2)
	{
		printf("num1 is greater");
	}
	else if (num2>num3)
	{
		printf("num2 is greater");
	}
	else if (num1>num3)
	{
		printf ("num1 is greater");
	}
	else 
	{
		printf ("num3 is greater");
	}
}
