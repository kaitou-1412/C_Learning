#include<stdio.h>
#include<math.h>
int main()
{
	float theta1,theta,pi,r;
	pi=3.14159;
	printf("Enter angle in radians:\n");
	scanf("%f",&theta1);
	theta=theta1*(180/pi);
	printf("Angle in Degrees is %f\n",theta);
	r=pow(sin(theta),2)+pow(cos(theta),2);
	printf("Sum of squares of sin and cos is: %f\n",r);
	return 0;
}
