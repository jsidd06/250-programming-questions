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
