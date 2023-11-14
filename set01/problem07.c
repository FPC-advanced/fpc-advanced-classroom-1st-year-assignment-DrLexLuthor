#include<stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int sum);
int input_n(){

    int a;
    printf("input number");

    scanf("%d",&a);

    return a;

}

int sum_n_nos(int n){

    int sum=0;
    for(int i=1;i<n;i++){

        sum+=i;
    }
    return sum;
}

void output(int sum){

    printf("the sum of numbers form 1 to the given number is%d",sum);

}
int main(){
    int n,sum;

    n = input_n();

    sum =sum_n_nos(n);

    output(sum);

    return 0;
}