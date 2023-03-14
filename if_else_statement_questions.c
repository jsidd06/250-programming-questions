Ques 1 The Greatest Number Among the Given Three Numbers.
#include<stdio.h>

int main(){
    double n1,n2,n3;
    printf("enter your three number\n");
    scanf("%lf %lf %lf",&n1,&n2,&n3);
    if(n1 >= n2 && n1 >= n3){
        printf("first number is big %.2lf",n1);
    } else if(n2 >= n1 && n2 >= n3){
        printf("second number is big %.2lf",n2);
    } else {
        printf("third number is big %.2lf",n3);
    }
    return 0;

}

Ques 2 The Number Is Positive or Negative.
#include<stdio.h>

int main(){
    double n1;
    printf("enter your number\n");
    scanf("%lf",&n1);
    if(n1 >= 0){
        printf("you have enter a positive number\n",n1);
    } else{
        printf("your number is negative",n1);
    }
    return 0;
}

Ques 3 Character Is Vowel or Consonant

#include<stdio.h>

int main(){
    char c;
    printf("check you have type vowel or not\n");
    scanf("%c", &c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        printf("you have typed a vowel %c",c);
    } else{
        printf("you have typed constant %c",c);
    }
    return 0;
}

Ques 4 A Character Is an Alphabet or Not
#include<stdio.h>

int  main(){
    char c;
    printf("check A is character or not\n");
    scanf("%c", &c);
    if((c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')){
        printf("it's a character %c",c);
    } else{
        printf("it's not a character %c",c);
    }
    return 0;
}

Ques 5 Uppercase, Lowercase, Special Character, or Digit
#include<stdio.h>

int main(){
    char c;
    printf("type any value \n");
    scanf("%c", &c);
    if(c >= 'a' && c <= 'z'){
        printf("you have entered a lowercase value",c);
    } else if(c >= 'A' && c <= 'Z'){
        printf("you have entered a Uppercase value",c);
    } else if(c >= '0' && c <= '-1'){
        printf("you have entered a numeric value",c);
    } else {
        printf("you have entered a special character",c);
    }
    return 0;
}

QUES 6 The Number Is Even or Odd?
#include<stdio.h>
int main(){
    char c;
    printf("enter the value\n");
    scanf("%c", &c);
    if(c % 2== 0){
        printf("your num is even",c);
    }else {
        printf("your num is odd",c);
    }
    return 0;
}

QUES 7 Greatest of Two Numbers?
#include<stdio.h>
int main(){
    char num1,num2;
    printf("enter your greatest num\n");
    scanf("%c %c",&num1, &num2);
    if(num1 >= num2) {
        printf("first num is greatest",num1);
    } else {
        printf("Second num is greatest",num2);
    }
    return 0;
}

QUES 8 Greatest Among Three Numbers?
#include<stdio.h>
int main(){
    char num1,num2,num3;
    printf("enter your greatest num\n");
    scanf("%c %c %c",&num1,&num2,&num3);
    if(num1 >= num2 && num1 >= num3){
        printf("first one is greatest",num1);
    } else if(num2 >= num1 && num2 >= num3){
        printf("second is greatest",num2);
    } else {
        printf("third is greatest",num3);
    }
    return 0;
}

QUES 9 Leap Year?
#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   else {
      printf("%d is not a leap year.", year);
   }
   return 0;
}

QUES 10 The Date Is Correct or Not?
#include<stdio.h>
int main(){
    double dd,mm,yyyy;
    printf("enter date (dd/mm/yyyy 'Formate')\n");
    scanf("%lf %lf %lf",&dd,&mm,&yyyy);
    if(yyyy >= 1900 && yyyy <= 9999){
        if(mm >= 1 && mm <= 12){
            if(dd >= 1 && dd <= 31){
                printf("date is valid",dd,mm,yyyy);
            } else {
                printf("please enter date correctly");
            }
        } else {
            printf("please enter month correctly");
        }
    } else{
        printf("please enter year correctly");
    }
    return 0;
}

QUES 11 Voting Eligibility Checker?
#include<stdio.h>
int main(){
    double age;
    printf("enter your age\n");
    scanf("%lf",&age);
    if(age >= 18){
        printf("you are eligible for voting\n",age);
    } else {
        printf("you are not eligible for voting");
    }
    return 0;
}

QUES 12 Find the maximum between two numbers.
#include<stdio.h>
int main(){
    double num1,num2;
    printf("enter the maximum between two numbers\n");
    scanf("%lf %lf",&num1,&num2);
    if(num1 >= num2){
        printf("first number is maximum %f",num1);
    } else if(num2 >= num1){
        printf("second number is maximum %f",num2);
    } 
    return 0;
}

QUES 13 Find the maximum between the three numbers?
#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter your three maximum\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1 >= num2 && num1 >= num3){
        printf("first number is maximum");
    } else if(num2 >= num1 && num2 >= num3){
        printf("second number is maximum");
    } else if(num3 >= num1 && num3 >= num2){
        printf("third number is maximum");
    } 
    return 0;
}

QUES 14 Check whether a number is negative, positive or zero?
#include<stdio.h>
int main(){
    double num;
    printf("enter the numeric value:-");
    scanf("%lf",&num);
    if(num > 0){
        printf("number is positive");
    } else if(num < -0){
        printf("number is negative");
    } else {
        printf("number is zero");
    }
    return 0;
}

QUES 15 Check whether a number is divisible by 5 and 11 or not?
#include<stdio.h>
int main(){
    int num;
    printf("enter any number:");
    scanf("%d",&num);
    if((num % 5 == 0) && (num % 11 == 0))
	{
        printf("Number is divisible by 5 and 11");
    } else {
        printf("Number is not divisible by 5 and 11");
    }
    return 0;
}

QUES 16 Find whether a number is even or odd.
#include<stdio.h>
int main(){
    int num;
    printf("enter any number:-");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("your number is even");
    } else{
        printf("your number is odd");
    }
    return 0;
}

QUES 17 Check whether a year is a leap year or not?
#include<stdio.h>
int main(){
    int num;
    printf("enter any year:-");
    scanf("%d",&num);
    if(num % 400 == 0) {
        printf("%d is a leap year",num);
    } else if(num % 100 == 0){
        printf("%d is not a leap year",num);
    } else if(num % 4 == 0){
        printf("%d is a leap year",num);
    } else {
        printf("%d is not leap year",num);
    }
    return 0;
}

QUES 18 Check whether a character is an alphabet or not.?
#include<stdio.h>
int main(){
    char c;
    printf("enter any character:-");
    scanf("%c",&c);
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        printf("%c is an alphabet.",c);
    } else {
        printf("%c is not an alphabet.",c);
    }
    return 0;
}

QUES 19 Input any alphabet and check whether it is a vowel or consonant?
#include<stdio.h>
int main(){
    char c;
    printf("enter any alphabet:-");
    scanf("%c",&c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        printf("%c you have entered vowel alphabet",c);
    } else if((c >= 'a' || c <= 'z') && (c >= 'A' || c <= 'Z')){
        printf("%c you have entered Consonant",c);
    } else {
        printf("%c is not an alphabet");
    }
    return 0;
}

QUES 20 Input any character and check whether it is the alphabet, digit or special
character?
#include<stdio.h>
int main(){
    char check;
    printf("enter any character:-");
    scanf("%c",&check);
    if((check >= 'a' &&  check <= 'z') ||  (check >= 'A' && check <= 'Z')){
        printf("you have entered an alphabet");
    } else if(check >= '0' && check <= '9'){
        printf("you have entered a number");
    } else {
         printf("you have entered a special character");
    }
    return 0;
}

QUES 21 Check whether a character is an uppercase or lowercase alphabet?
#include<stdio.h>
int main(){
    char c;
    printf("enter any character:-");
    scanf("%d",&c);
    if(c >= 'a' && c <= 'z'){
        printf("you have entered a lowercase alphabet");
    } else if(c >= 'A' && c <= 'Z') {
        printf("you have entered a uppercase alphabet");
    } else {
        printf("no alphabet found.");
    }
    return 0;
}


QUES 22 Input the week number and print the weekday?
#include<stdio.h>
int main(){
    char week;
    printf("enter a number between[1-7]:-");
    scanf("%d",&week);
    if(week == 1){
        printf("it's Monday");
    } else if(week == 2) {
        printf("it's Tuesday");
    } else if(week == 3){
        printf("its' Wednesday");
    } else if(week == 4){
        printf("it's Thursday");
    } else if(week == 5){
        printf("it's Friday");
    } else if(week == 6){
        printf("it's Saturday");
    } else if(week == 7){
        printf("it's Sunday");
    } else {
        printf("it's not a week");
    }
    return 0;
}

QUES 23 Input the month number and print the number of days in that month?
#include<stdio.h>
int main(){
    int month;
    printf("enter a number between[1-12]:-");
    scanf("%d",&month);
    if(month == 1){
        printf("it's January");
    } else if(month == 2){
        printf("it's February");
    } else if(month == 3){
        printf("it's March");
    } else if(month == 4){
        printf("its April");
    } else if(month == 5){
        printf("it's May");
    } else if(month == 6){
        printf("it's June");
    } else  if(month == 7){
        printf("it's July");
    } else if(month == 8){
        printf("it's August");
    } else if(month == 9){
        printf("it's September");
    } else if(month == 10){
        printf("it's October");
    } else if(month == 11){
        printf("it's November");
    } else if(month == 12){
        printf("it's December");
    } else {
        printf("it's not month");
    }
    return 0;
}

QUES 24 Count the total number of notes in a given amount?
#include<stdio.h>
int main(){
    int amount;
    int note2000, note500, note200, note100, note50, note20, note10;
    note2000 = note500 = note200 = note100 = note50 = note20 = note10 = 0;
    printf("enter a amount:-");
    scanf("%d",&amount);
    if(amount >= 2000){
        note2000 = amount/2000;
        amount -= note2000 * 2000;
    }
     if(amount >= 500){
        note500 = amount/500;
        amount -= note500 * 500;
    } 
    if(amount >= 200){
        note200 = amount/200;
        amount -= note200 * 200;
    } 
    if(amount >= 100){
        note100 = amount/100;
        amount -= note100 * 100;
    }
     if(amount >= 50){
        note50 = amount/50;
        amount -= note50 * 50;
    } 
     if(amount >= 20){
        note20 = amount/20;
        amount -= note20 * 20;
    } 
     if(amount >= 10){
        note10 = amount/10;
        amount -= note10 * 10;
    }
    printf("Total number of notes = \n");
    printf("2000 = %d\n", note2000);
    printf("500 = %d\n", note500);
    printf("200 = %d\n", note200);
    printf("100 = %d\n", note100);
    printf("50 = %d\n", note50);
    printf("20 = %d\n", note20);
    printf("10 = %d\n", note10);
    return 0;
}

QUES 25 Input the angles of a triangle and check whether the triangle is valid or
not?
#include<stdio.h>
int main(){
    int angle1, angle2, angle3, sum;
    printf("enter three angles of triangle:-");
    scanf("%d %d %d",&angle1 , &angle2, &angle3);
    sum = angle1 + angle2 + angle3;
    if(sum >= 180 && angle1 > 0 && angle2 > 0 && angle3 > 0){
        printf("triangle is valid");
    } else {
        printf("triangle is not valid");
    }
    return 0;
}