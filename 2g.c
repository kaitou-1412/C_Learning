#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,r,theta;
	printf("Enter Cartesian co-ordinates x and y:\n");
	scanf("%f%f",&x,&y);
	r=sqrt((x*x)+(y*y));
	theta=atan(y/x);
	printf("Polar Co-ordinates are (%f,%f)\n",r,theta);
	return 0;
}
