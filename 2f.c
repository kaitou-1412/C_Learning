#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a,b,c; float s,area;
	printf("Enter the sides of Triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of the Triangle=%f\n",area);
	return 0;	
}
