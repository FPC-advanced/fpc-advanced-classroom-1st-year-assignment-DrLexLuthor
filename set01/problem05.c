#include<stdio.h>
int input();
int compare(int a, int b, int c);
void output(int largest);
int input(){
       int n;
    printf("\tenter a number\n");
    scanf("%d",&n);
    return n;
}
int compare(int a, int b, int c){
    int largest;
    if(a>b&&a>c){
largest= a;
    }
        if(b>c&&b>a){
largest = b;
    }
        if(c>b&&c>a){
largest = c;
    }
    return largest;
}
void output(int largest){
printf("the largest number  is %d",largest);
}
int main(){
    int a,b,c,largest;
    a = input();
    b = input();
    c = input();
    largest = compare(a,b,c);
    output(largest);
    return 0;
}
