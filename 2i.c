#include<stdio.h>
#include<math.h>
int main()
{
	float l1,L1,g1,G1,l2,L2,g2,G2,d,pi;
	printf("Enter angle in degrees:\n");
	scanf("%f%f%f%f",&l1,&l2,&g1,&g2);
	pi=3.14159;
	L1=l1*(pi/180);
	L2=l2*(pi/180);
	G1=g1*(pi/180);
	G2=g2*(pi/180);
	d=3963*acos((sin(L1)*sin(L2))+(cos(L1)*cos(L2)*cos(G2-G1)));
	printf("Distance in Nautical Miles is %f\n",d);
	return 0;
}
