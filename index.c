Ques-1 AREA OF CIRCLE
#include<stdio.h>

int main(){
	float radius, area;
	printf("enter the value of circle\n");
	scanf("%f",&radius);

	area = 1.14159 * radius * radius;
	printf("area of circle is %f",area);
	return 0;
}

Ques: 2 ASCII VALUE
#include<stdio.h>

int main() {
	char c;
	printf("enter a character: ");
	scanf("%c",&c);

	printf("ASCII of value %c =%d",c,c);
	return 0;
}

QUES 3 AREA OF TRIANGLE
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

QUES 4 Convert a Person�s Name into an Abbreviated
#include<stdio.h>

int main() {
	char fname[20],mname[20],lname[20];
	printf("enter your first name,middle name,last name \n");
	scanf("%s%s%s",fname,mname,lname);
	printf("Abbreviated name :%c. %c. %s",fname[0],mname[0],lname);
	return 0;
}

QUES 5 Simple Interest
#include<stdio.h>

int main(){
	float principal, time,rate,interest;
	printf("enter the principal interest or time interest or rate interest\n");
	scanf("%f %f %f",&principal,&time,&rate);
	interest = (principal*time*rate) /100;
	printf("it's your interest value %f",interest);
	return 0;
}
QUES 6 Gross Salary of an Employee
#include<stdio.h>

int main(){
	float basic,da,hr,salary;
	printf("enter your basic da or hr\n");
	scanf("%f %f %f",&basic,&da,&hr);
	salary = basic+da+hr+salary;
	printf("this is your salary %f",salary);
	return 0;
}

Ques 7 Percentage of 5 Subjects
#include<stdio.h>

int main(){
	float math,hindi,english,art,history,subtotal,total;
	printf("enter your subject numbers\n");
	scanf("%f %f %f %f %f",&math,&hindi,&english,&art,&history);
	subtotal = (math + hindi + english + art + history);
	total = (subtotal / 500) * 100 ;
	printf("this is your percentages number = %.2f",total);
	return 0;
	
}
