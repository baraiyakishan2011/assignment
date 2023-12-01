#include<stdio.h>

main()
{
	char choise;
	printf("Enter the day : ");
	scanf("%c",&choise);
	
	switch(choise)
	{
		case 's':printf("Day is : Sunday");
		break;
		case 'm':printf("Day is : Monday");
		break;
		case 't':printf("Day is : Tuesday");
		break;
		case 'w':printf("Day is : Wednesday");
		break;
		case 'T':printf("Day is : Thursday");
		break;
		case 'f':printf("Day is : Friday");
		break;
		case 'S':printf("Day is : Saturday");
		break;
		default:printf("invalid character");
	}
}