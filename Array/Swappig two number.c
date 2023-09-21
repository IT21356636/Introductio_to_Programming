//swapping two numbers

#include<stdio.h>
int main (void)
{
	int a,b,temp;
	printf("Enter numbers(Ex: 50,95)  : ");
	scanf("%d,%d",&a,&b);
	printf("Before Swapping : \na = %d\nb = %d",a,b);
	 
	//swapping
	temp = a;
	a = b;
	b = temp;
	
	printf("\n\nAfter Swapping : \na = %d\nb = %d",a,b);
	 
	return 0;
}
