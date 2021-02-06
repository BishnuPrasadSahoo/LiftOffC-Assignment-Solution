#include<stdio.h>
int main ()
{
	int celsius,fahrenheit;
	printf("enter the temperature in celsius : \n");
	scanf("%d" ,&celsius);
	fahrenheit = (1.8*celsius) +32;
	printf(" temperature in fahrenheit ; %d \n ",fahrenheit);
	return 0;
}
