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
    int lg;
    if(a>b&&a>c){
lg = a;
    }
        if(b>c&&b>a){
lg = b;
    }
        if(c>b&&c>a){
lg = c;
    }
    return lg;
}
void output(int largest){
printf("the largest number  is %d",largest);
}
int main(){
    int a,b,c,lg;
    a = input();
    b = input();
    c = input();
    lg = compare(a,b,c);
    output(lg);
    return 0;
}
