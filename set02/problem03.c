#include<stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int input_number(){
    int n;
    printf("enter the number")
    
}
int is_composite(int n){
    int i ;
    for(i=0;i<=11;i++){
    if (n%i==0&&n!=3&&n!=2&&n!=5&&n!=7&&n!=11){
        i = 12;
        return 1;
    }
    else{
        return 0;
    }
    }
}
void output(int n, int result){
    if(result)
    printf("%d is composite",n);
    else{printf("not composite");}
}

int main(){
    int n,res;
    n = input_number();

    res = is_composite(n);

    output(n,res);
    
    return 0;
}