#include<stdio.h>
#include<math.h>
int main()
{
	float v,t,wcf;
	printf("Enter Temperature and Wind Velocity:\n");
	scanf("%f%f",&t,&v);
	wcf=35.74+(0.6215*t)+(((0.4275*t)-35.75)*pow(v,0.16));
	printf("Wind Chill Factor is %f\n",wcf);
	return 0;
}
