#include<stdio.h>
void input(int *a, int *b){
    printf("enter two numbers");
    scanf("%d%d",a,b);
}
void adde(int a, int b, int *sum){
    *sum = 0;
    *sum = a+b;
}
void output( int sum){
    printf("the sum is %d",sum);
}
int main(){
    int a,b,su;
    input(&a,&b);
    adde(a,b,&su);
    output(su);
    return 0;
}