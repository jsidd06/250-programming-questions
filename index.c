#include<stdio.h>

int main() {
	float a,h,area;
	printf("Enter the Area of Triangle value \n");
	scanf("%f",&a);
	scanf("%f",&h);
	area = (a*h)/2;
	printf("this is your area of triangle %f",area);
	return 0;
}
