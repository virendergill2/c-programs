#include<stdio.h>
#include<conio.h>
void main()
{
	int choice,a,b,valid;
	float result;
	printf("Enter you choice \n Press 1 for Add \n 2 for Subtract \n 3 multiply\n");
	printf("4 for divide");
	scanf("%d",&choice);
	valid=1;
	if(choice==1)
	{       printf("Enter two numbers ");
		scanf("%d%d",&a,&b);
		result= a+b;
	}
	else if(choice==2)
	{
	printf("Enter two numbers ");
	scanf("%d%d",&a,&b);
	result= a-b;
	}
	else if(choice==3)
	{
	printf("Enter two numbers ");
	scanf("%d%d",&a,&b);
	result =a*b;
	}
	else if(choice==4)
	{
	printf("Enter two numbers ");
	scanf("%d%d",&a,&b);
	result = a/b;
	}
	else
	{
	valid =0;
	 printf("invalid choice");
	}
	if(valid==1)
	{
	printf("Your result is = %f",result);
	}
	getch();

}
