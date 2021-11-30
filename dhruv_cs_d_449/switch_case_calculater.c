#include <stdio.h>
void main()
{
	int a,b,addition,substraction,multiplication,division;


	printf("Enter the value of a\n");
	scanf("%d" , &a);
	printf("Enter the value of b\n");
	scanf ("%d" , &b);


	printf("Enter 1 for addition\n");
	printf("Enter 2 for substraction\n");
	printf("Enter 3 for multiplication\n");
	printf("Enter 4 for division\n");

	switch (a) {
		case 1 :
		addition=a+b;
		printf("addition=%d" , addition);
		break;

		case 2 :
		substraction=a-b;
		printf("substraction=%d" , substraction);
		break;

		case 3 :
		multiplication=a*b;
		printf("multiplication=%d" , multiplication);
		break;

		case 4 :
		division=a/b;
		printf("division=%d" , division);
		break;

		default :

		printf("Enter valid number\n");
	}
}