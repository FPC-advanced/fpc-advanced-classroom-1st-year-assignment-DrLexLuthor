#include<stdio.h>
void input(int *a, int *b){
    printf("\tenter two numbers\n");
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