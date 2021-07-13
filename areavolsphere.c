/*write a program that calculates area and volume of sphere*/
#include<stdio.h>
#include<math.h>
#define PI 3.14
void main()
{
	float area,volume,r;
	printf("enter the radius of sphere: \n");
	scanf("%f",&r);
	area = PI*4*pow(r,2);
	volume = PI*4/3*pow(r,3);
	printf("The area of sphere is %.2f and volume of sphere is %.2f", area,volume);
	getch();
}
