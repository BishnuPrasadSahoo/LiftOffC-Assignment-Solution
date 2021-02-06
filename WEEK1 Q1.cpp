#include<stdio.h>
int main ()
{
	int a , b ,k,l,m,n,o;
	printf("please enter any two numbers: \n");
	scanf("%d %d", &a , &b);
	k=a+b;
	l=a-b;
	m=a*b;
	n=a/b;
	o=a%b;
	printf("sum of two numbers is %d \n",k);
	printf("substraction of two numbers is %d \n",l);
	printf("multiplication of two numbers is %d \n",m);
	printf("division of two numbers is %d \n",n);
	printf("modulo of two numbers is %d \n",o);
	return 0;
}
