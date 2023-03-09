// Ques-1 AREA OF CIRCLE
#include<stdio.h>

int main(){
	float radius, area;
	printf("enter the value of circle\n");
	scanf("%f",&radius);

	area = 1.14159 * radius * radius;
	printf("area of circle is %f",area);
	return 0;
}

// Ques: 2 ASCII VALUE
#include<stdio.h>

int main() {
	char c;
	printf("enter a character: ");
	scanf("%c",&c);

	printf("ASCII of value %c =%d",c,c);
	return 0;
}

// QUES 3 AREA OF TRIANGLE
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
