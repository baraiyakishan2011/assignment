#include<stdio.h>

main()
{
	int num;
	
	printf("Enter number : ");
	scanf("%d",&num);
	
	(num%2==0)?printf("%d is even",num):printf("%d is odd",num);
}