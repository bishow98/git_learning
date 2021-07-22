//Program to enter two numbers and perform arthmetic operation on them 
#include<stdio.h>
void main()
{
	int num1,num2,sum,sub,mul,div,mod;  //declaration of variable
	printf("enter Two numbers: ");
	scanf("%d %d",&num1,&num2);
	sum=num1+num2;
	printf("\n The sum is =%d",sum);
	sub=num1-num2;
	printf("\n The sub is =%d",sub);
	mul=num1*num2;
	printf("\n The mul is %d",mul);
	div=num1/num2;
	printf("\n The div is %d",div);
	mod=num1%num2;
	printf("\n The mod is %d",mod);
	getch();	
}
