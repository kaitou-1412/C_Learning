#include<stdio.h>
#include<math.h>
int main()
{
	int n;	
	printf("Enter the amount\n");
	scanf("%d",&n);
	int n1,n2,n5,n10,n50,n100,r100,r50,r10,r5,r2;
	n100=n/100; r100=n%100;
	n50=r100/50;	r50=r100%50;
	n10=r50/10; r10=r50%10;
	n5=r10/5; r5=r10%5;
	n2=r5/2; r2=r5%2;
	n1=r2%2;
	printf("Number of Rs.100 notes used: %d\n",n100);
	printf("Number of Rs.50 notes used: %d\n",n50);
	printf("Number of Rs.10 notes used: %d\n",n10);
	printf("Number of Rs.5 notes used: %d\n",n5);
	printf("Number of Rs.2 notes used: %d\n",n2);
	printf("Number of Re.1 notes used: %d\n",n1); 
	printf("The smallest number of notes is: %d\n",(n100+n50+n10+n5+n2+n1));
	return 0;
}

