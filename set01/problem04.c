
#include<stdio.h>    
int input();
int add(int a, int b);
void output(int a, int b, int sum);

int input(){

int numb;

scanf("%d",&numb);  
return numb;
}

int add(int a, int b){
int sum;
sum=0;
sum=a+b;
}

void output(int a, int b, int sum)
{

printf("the sum is %d",sum);

}



int main() {
    int num1, num2, sum;

    printf("enter first number: ");
    num1 = input();

    printf("nter second number: ");
    num2 = input();

    sum = add(num1, num2);

    output(num1, num2, sum);

    return 0;


}