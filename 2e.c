#include<stdio.h>
#include<math.h>
int main()
{
	int n; 
	printf("Enter five digit number\n");
	scanf("%d",&n);
	int d1,d2,d3,d4,d5,num;
	d1=n%10;
	d2=(n%100)/10;
	d3=(n%1000)/100;
	d4=(n%10000)/1000;
	d5=n/10000;
	num=((d5+1)*10000)+((d4+1)*1000)+((d3+1)*100)+((d2+1)*10)+(d1+1);
	printf("New number: %d\n",num);
	return 0;
}

