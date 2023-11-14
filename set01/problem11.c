#include <stdio.h>
int main(){

struct complex 
{
    
    float imagi;
    float real;
};

struct complex num1,num2,sum;

printf("type the first real and imagi number");
scanf("%f %f",&num1.real,&num1.imagi);


printf("type the second real and imagi number");
scanf("%f %f",&num2.real,&num2.imagi);



sum.real=num1.real+num2.real;
sum.imagi=num1.imagi+num2.imagi;


printf("sum=%.2f + %.2f",sum.real,sum.imagi);









    return 0;
}