#include<stdio.h>
#include<math.h>
int main()
{
	int n;	
	printf("Enter the four digit number\n");
	scanf("%d",&n);
	printf("Sum of the First and Last Digits is: %d\n",(n/1000)+(n%10));	
	return 0;
}

